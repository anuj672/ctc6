#include<iostream>
#include<string>
#include<vector>
using namespace::std;
bool check_if_perm(string s){
    int odd_count =0;
    vector<int> counter(26);
    for(int i=0;i<s.length();i++){
        int current_char = s[i]-'a';
        counter[current_char]++;
        if(counter[current_char]%2==1)
        odd_count++;
        else
        odd_count--;
    }
    return odd_count<=1;   
}
//no memory needed for vector//
bool check_if_perm_btiwise(string s){
    int bit_vector =0;
    for(int i=0;i<s.length();i++){
        int int_val = s[i]-'a';
        int mask = 1 << int_val;
        if((bit_vector & mask)==0)
            bit_vector |= mask;
        else
            bit_vector &= ~mask;    
    }
    return bit_vector ==0 || (bit_vector & (bit_vector-1))==0; 
}
int main(){
    string s="aabbac";
    cout<<check_if_perm(s);
    cout<<check_if_perm_btiwise(s);
    return 0;
}