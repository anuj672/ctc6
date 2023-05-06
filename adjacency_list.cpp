#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void disp_list(list<int> adj[], int n){
    for(int i=0;i<n;i++){
        cout<<i<<"--->";

         if(adj[i].empty()){
            cout<<"No edges"<<endl;
            continue;
        }
        list<int> :: iterator it;
        for(it=adj[i].begin();it!=adj[i].end();it++)
        cout<<*it;
        cout<<endl;
    }
}
void add_list(list<int> adj[], int s, int e){
    adj[s].push_back(e);
    adj[e].push_back(s);

}
int main()
{
    int x;
    cout<<"list size"<<endl;
    cin>>x;
    list<int> adj[x];
  
    add_list(adj, 1,2);
    add_list(adj, 1,4);
    add_list(adj, 2,3);
    add_list(adj, 3,4);
    add_list(adj, 3,5);
    disp_list(adj,x);
    return 0;
}
