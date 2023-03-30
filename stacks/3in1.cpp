#include<iostream>
using namespace std;
class Stack{
    private:
    int no_of_stacks;
    int *arr;
    int max_cap;
    int *max_stack_size;

    public:
    Stack(int no_of_stacks, int arr_size){
        //flawed
        this->no_of_stacks = no_of_stacks;
        arr = new int[arr_size];
        max_cap = arr_size/no_of_stacks;
        max_stack_size = new int[no_of_stacks];
        cout<<no_of_stacks<<endl;
    
    }
    bool isfull(int stackNum){return (max_stack_size[stackNum-1]==max_cap);}
    bool isempty(int stackNum){ return  (max_stack_size[stackNum-1]==0); }
    void push(int stackNum, int val){
        if(isfull(stackNum)){
        cout<<"stack is full"<<val<<endl;
        return;
        }
        arr[(stackNum-1)*max_cap+ max_stack_size[stackNum-1]]= val;
        max_stack_size[stackNum-1]++;
    }
    void pop(int stackNum){
        if(isempty(stackNum)){
        cout<<"nothing to pop"<<endl;
        return;
        }
        arr[(stackNum-1)*max_cap+ max_stack_size[stackNum-1]]= 0;
        max_stack_size[stackNum-1]--;

    }
    int top(int stackNum){
        return arr[(stackNum-1)*max_cap+ max_stack_size[stackNum-1]-1];
    }

};
int main(){
    Stack st(3,9);
    st.pop(1);
    st.push(1,1);
    st.push(1,2);
    st.push(2,3);
    st.push(2,4);
    st.push(3,5);
    st.push(3,6);
    st.push(3,7);
    st.pop(3);
    st.push(3,7);
    cout<<st.top(3)<<endl;
    return 0;

}