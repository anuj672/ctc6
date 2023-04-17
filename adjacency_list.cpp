#adjacency list graph
#include <iostream>
#include<iterator>
#include<list> 
using namespace std;
void disp_list(list<int> adj_list[]){
    for(int i=0;i<6;i++){
        cout<<i<<"-->";
        list<int> :: iterator it;
        for(it = adj_list[i].begin(); it!=adj_list[i].end();it++){
            cout<<*it<<",";
        }
        cout<<endl;
    }
}
void add(list<int> adj_list[], int s, int e){
    adj_list[s].push_back(e);
    
}

int main()
{
    int v=6;
    list<int> adj_list[v];
    add(adj_list,0,4);
    add(adj_list,4,0);
    add(adj_list,1,2);
    add(adj_list,2,1);
    add(adj_list,0,3);
    add(adj_list,3,0);
    disp_list(adj_list);
    cout<<"Hello World";

    return 0;
}
