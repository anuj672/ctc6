#include <iostream>
#include<queue>
#include<string>
using namespace std;
class Animal{
    private:
    queue<int> dog, cat;
    int counter;
    public:
    Animal(){ int counter =1;}
    int enque(string s){
        if(s=="cat"){cat.push(counter);}
        else if(s=="dog"){dog.push(counter);}
        else{return -1;}
        counter++;
        return counter-1;
    }
    int dequeCat(){
        if(cat.empty()){
            cout<<"no cats availale";
            return -1;
        }
        int top = cat.front();
        cat.pop();
        return top;
    }
    int dequeDog(){
        if(dog.empty()){
            cout<<"no dogs availale";
            return -1;
        }
        int top = dog.front();
        dog.pop();
        return top;
    }
    int dequeAny(){
        if(dog.front()>cat.front()){
            int top = cat.front();
            cat.pop();
            return top;
        }
        int top = dog.front();
        dog.pop();
        return top;
    }
};

int main()
{
    Animal a;
    cout<<"Shelter received an dog with index "<<a.enque("dog")<<'\n';
    cout<<"Shelter received an cat with index "<<a.enque("cat")<<'\n';
    cout<<"Shelter received an cat with index "<<a.enque("cat")<<'\n';
    cout<<"Shelter received an dog with index "<<a.enque("dog")<<'\n';
    cout<<"Shelter received an cat with index "<<a.enque("cat")<<'\n';
    cout<<"Shelter received an dog with index "<<a.enque("dog")<<'\n';
    cout<<"Shelter received an cat with index "<<a.enque("cat")<<'\n';
    cout<<"Get an animal of any kind. The index is "<<a.dequeAny()<<'\n';
    cout<<"Get a dog. The index is "<<a.dequeDog()<<'\n';
    cout<<"Get a cat. The index is "<<a.dequeCat()<<'\n';
    cout<<"Get a dog. The index is "<<a.dequeDog()<<'\n';
    cout<<"Get a dog. The index is "<<a.dequeDog()<<'\n';
    cout<<"Get a dog. The index is "<<a.dequeDog()<<'\n';

    return 0;
}
