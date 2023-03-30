#include<iostream>
using namespace::std;

class Stack{
    int *arr;
    int top;
    public:
    Stack(int n){
        arr =  new int[n];
        top =-1;
    }
    void push(int x){
        if(top==sizeof(arr)-1){
        cout<<"full"<<endl;
        return;
    }
        top++;
        arr[top]=x;
        cout<<"pushed"<<endl;
    }
    void pop(){
        if(top==-1)
        return;
        top--;
    }
    bool isEmpty(){
        if(top==-1)
        return true;
        return false;
    }
    int getTop(){
        if(top==-1)
        return -1;
        return arr[top];
    }
};
int main(){
    Stack st(10);
    cout<<st.isEmpty()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    st.push(3);
    cout<<st.isEmpty()<<endl;
    cout<<st.getTop()<<endl;

    return 0;
}
