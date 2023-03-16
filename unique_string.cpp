#include<iostream>
#include<string>
#include <vector>
using namespace::std;
 int main(){
    string s = "adc4c";
    vector<bool> isset(128);
    for(int i=0;i<s.length();i++){
        int val = s[i];
        if(isset[val]){
        cout<<"not unique";    
        return 1;
        }
    isset[val]=true;    
    }
    cout<<"unique";
    return 0;
 }