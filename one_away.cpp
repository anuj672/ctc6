#include<iostream>
#include<string>
#include<vector>
using namespace::std;
bool equal_length_calc(string,string);
bool uneq_length(string, string);
bool eq_uneq_length(string, string);
int comparer(string s1, string s2){
    if(s1.length()==s2.length())
        return 0;
    else if(s1.length()>s2.length())
        return 1;
    else
        return 2;        

}
int main(){
    string s1, s2;
    cout<<"enter string 1"<<endl;
    cin>>s1;
    cout<<"enter string 2"<<endl;
    cin>>s2;
    int string_comp = comparer(s1,s2);
    if(string_comp==0)
    cout<<equal_length_calc(s1,s2)<<endl;
    else if(string_comp==1)
    cout<<uneq_length(s1,s2)<<endl;
    else
    cout<<uneq_length(s2,s1)<<endl;

    cout<<eq_uneq_length(s1,s2)<<endl;
    return 0;
}
bool equal_length_calc(string s1,string s2){
    bool checker =false;
    int index1=0, index2=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            if(checker)
            return false;
            checker=true;
        }
    }
    return true;
}
bool uneq_length(string s1, string s2){//s1 is greater always
    if(s1.length()-s2.length()>1)
    return false;
    bool checker = false;
    int index1=0, index2=0, l1=s1.length(), l2=s2.length();
    while(index1<l1 && index2<l2){
        if(s1[index1]!=s2[index2]){
            if(checker)
            return false;
            checker =true;
            index1++;
        }
        else{
            index1++;
            index2++;
        }
    }
    return true;
}
bool eq_uneq_length(string s1, string s2){
    string new_s1 = s1.length()>s2.length() ? s1 : s2;
    string new_s2 = s1.length()>s2.length() ? s2 : s1;
    //new_s1 is always greater.
    bool checker = false;
    int index1 = 0, index2 =0, l1= new_s1.length(), l2 = new_s2.length();
    while(index1<l1 && index2<l2){
        if(new_s1[index1]!=new_s2[index2]){
        if(checker)
        return false;
        checker = true;
        if(l1==l2)
        index2++;
        }
        else{
            index2++;
        }
        index1++;
    }
    return true;
}
