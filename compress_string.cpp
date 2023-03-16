#include<string>
#include<iostream>
using namespace::std;
string compressed_string(string);
int main(){
    string s1 = "aaaaa";
    cout<<compressed_string(s1)<<endl;
    return 0;
}
string compressed_string(string s1){
    string compressed_string;
    int count_compressor=0;
    for(int i=0;i<s1.length();i++){
        count_compressor++;
        if(i+1>=s1.length() || s1[i]!=s1[i+1]){
            compressed_string = compressed_string + s1[i] + to_string(count_compressor);
            count_compressor=0;
        }
    }
    return (compressed_string.length() > s1.length() ? s1 : compressed_string);
}