#include<iostream>
#include<string>
using namespace std;

// int main(){

//     string name;
//     cout<<"Enter Your Name : ";
//     getline(cin, name);

//     cout<<"Welcome ! "<<name;


//     return 0;
// }

int main(){

    char name[20];
    cout<<"Enter Your Name : ";
    cin.getline(name, 20);

    cout<<"Welcome ! "<<name;


    return 0;
}