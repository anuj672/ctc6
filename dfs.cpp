#include <iostream>
#include<vector>
#include<list>
using namespace std;
void traverse_graph(list<int> adj_graph[],int v){
    for(int i=0;i<v;i++){
        cout<<i<<"-->";
        list<int> ::iterator it;
        for(it=adj_graph[i].begin();it!=adj_graph[i].end();it++)
        cout<<*it;
        cout<<endl;
    }
}
void add_edge(list<int> adj_graph[],int u, int v){
    adj_graph[u].push_back(v);
    adj_graph[v].push_back(u);
}
void dfs(list<int> adj_graph[],int start, int v){
    static vector<bool> visited(v,false);
    visited[start]=1;
    cout<<start<<" ";
     list<int> ::iterator it;
    for(it=adj_graph[start].begin();it!=adj_graph[start].end();it++)
    if(visited[*it]);
    else{
        dfs(adj_graph,*it,v);
    }
    
}
int main()
{
    int v=6;
    list<int> adj_list[v];
   add_edge(adj_list,0,1);
   add_edge(adj_list,0,4);
   add_edge(adj_list,1,2);
   add_edge(adj_list,1,3);
   add_edge(adj_list,3,5);
   traverse_graph(adj_list,v);
   dfs(adj_list,0,v);

    return 0;
}
