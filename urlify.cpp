#include<iostream>
#include<string>
#include<vector>
using namespace::std;
void urlify(char *str, int len){
    int act_length, no_spaces=0;
    for(int i=0;i<len;i++){
        if(str[i] == ' '){
            no_spaces++;
        }
    }
    act_length= len + no_spaces*2;
    for(int i=len-1;i>=0;i--){
        if(str[i] == ' '){
            str[act_length-1]='2';
            str[act_length-2]='0';
            str[act_length-3]='%';
            act_length= act_length-3;
        }
        else{
        str[act_length-1]= str[i];
        act_length--;
        }
    }
}
int main(){
    char s[]= "Mr John Smith    ";
    cout << "Actual string   : " << s<< std::endl;
    urlify(s, 13);                                        //Length of "Mr John Smith" = 13
    cout << "URLified string : " << s << std::endl;
    return 0;
}