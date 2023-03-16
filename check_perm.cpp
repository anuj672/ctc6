#include<iostream>
#include<string>
#include<vector>
using namespace::std;
int check_perm_sort(string s, string p){
    sort(s.begin(),s.end());
    sort(p.begin(),p.end());
    if(s==p){
    cout<<"is a permutation";
    return 1;
}
    cout<<"not a permutation"; 
    return 0;
}
int check_perm_vect(string s, string p){
    vector<int> count_s(26);
    for(int i=0;i<s.length();i++){
        count_s[s[i]-'a']++;
    }
    for(int i=0;i<p.length();i++){
        count_s[p[i]-'a']--;
        if(count_s[p[i]-'a']<0){
        cout<<"not a permutation";    
        return 0;
        }
    }
    cout<<"is a permuation";
    return 1;
}
int main(){
    string s = "abc", p ="bac";
    if(s.length()!=p.length()){ 
    cout<<"not a permutation as length is different";
    return 0;
    }
    cout<<check_perm_sort(s,p)<<endl;
    cout<<check_perm_vect(s,p);
    return 0;
}