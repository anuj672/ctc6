#include <iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> s1;
    s1.push(1);
    s1.push(4);
    s1.push(5);
    stack<int> s2;
    while(!s1.empty()){
        int x=s1.top();
        s1.pop();
        while(!s2.empty() && s2.top()>x){
            int y=s2.top();
            s1.push(y);
            s2.pop();
        }
        s2.push(x);
    }
    while(!s2.empty()){
        cout<<s2.top()<<endl;
        s2.pop();
    }


    return 0;
}
