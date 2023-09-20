#include<iostream>
#include<string>
using namespace std;

int main(){

    string name;

    if(name.empty() == 1){
        cin>>name;
        cout<<"WELCOME "<<name;
    }
    else{
        cout<<"Name Exist"<<name;
    }


    return 0;
}

