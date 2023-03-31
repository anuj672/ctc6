#include <iostream>
#include<vector>
#include<stack>
using namespace std;
class DPStack{
    private:
    stack<int> *mystack;
    int threshold;
    int currstack;
    public:
    DPStack(){
        threshold=2;
        mystack = new stack<int> [2];
        currstack=0;
    }
    void push(int x){
        if(mystack[currstack].size()==threshold)
        currstack++;
        mystack[currstack].push(x);
    }
    void pop(){
        if(mystack[currstack].size()==0)
        return ;
        mystack[currstack].pop();
    }
    void popAtIndex(int index){
        if(mystack[index].size()==0)
        return ;
        mystack[index].pop();
    }
    int get_top(int index){
        if(mystack[index].size()==0)
        return 0;
        return mystack[index].top();
        
    }
    int get_right_top(){
          if(mystack[currstack].size()==0)
        return 0;
        return mystack[currstack].top();
    }
    
};
int main()
{
    cout<<"Hello World";
    DPStack s;
    for(int i=0; i<4; i++)
        s.push(i);
    s.pop();    
    cout<<s.get_top(1);    
    
    return 0;
}
