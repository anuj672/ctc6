#include <iostream>
#include <vector>
#include<list>
using namespace std;

int main(){
    int number_of_projects;
    cout<<"Enter number of projects"<<endl;
    cin>>number_of_projects;
    vector<char> project_names;
    list<char> graph[number_of_projects];
    char c;
    for(int i=0;i<number_of_projects;i++){
        cout<<"enter connections for "<<char('a'+i);
        project_names.push_back(char('a'+i));
        while(cin >> c && c!='.'){
            graph[i].push_back(c);
        }
    }
     for (int i = 0; i < number_of_projects; i++) {
        cout << char('a' + i) << "--> ";
        for (char v : graph[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}

