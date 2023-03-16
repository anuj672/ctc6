#include<iostream>
#include<string>
using namespace::std;
bool check_string(string s){
//string s = "aaav";
int checker = 0;
for(int i=0;i<s.length();i++){
    int value_at_i = s[i]-'a';
    if((checker & (1<<value_at_i))>0){
    cout<<"not unique";    
    return false;
    }
checker |= 1<<value_at_i;    
}
cout<<"unique";
return true;
}
int main(){
    string s ="aeedb";
    cout<<check_string(s);
    return 0;
}