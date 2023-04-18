//bfs for a graph
#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<iterator>
using namespace std;
void disp_graph(list<int> adj_graph[], int v){
    for(int i=0;i<v;i++){
        cout<<i<<"-->";
        list<int> ::iterator it;
        for(it = adj_graph[i].begin();it!=adj_graph[i].end();it++){
            cout<<*it;
            cout<<",";
        }
        cout<<endl;
    }
}
void add_edge(list<int> adj_graph[], int u, int v){
    adj_graph[u].push_back(v);
    adj_graph[v].push_back(u);
}
void bfsearch(list<int> adj_graph[], int start, int v){
    cout<<"in bf search"<<endl;
    queue<int> q;
    q.push(start);
    cout<<"pushing"<<endl;
    vector<bool> visited(v,false);
    cout<<"bool initialised"<<endl;
    visited[start]=true;
    while(!(q.empty())){
       int x = q.front();
        cout << x << " ";
        q.pop();
        list<int> ::iterator it;
        for(it=adj_graph[x].begin();it!=adj_graph[x].end();it++){
             if(!visited[*it]){
                visited[*it] = true;
                q.push(*it);
            }
        }
    }
}
int main(){
    int v=6;
    list<int> adj_list[v];
   add_edge(adj_list,0,1);
   add_edge(adj_list,0,4);
   add_edge(adj_list,1,2);
   add_edge(adj_list,1,3);
   disp_graph(adj_list,v);
   bfsearch(adj_list,0,v);
   
}
