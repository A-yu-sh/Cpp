 #include<iostream>
using namespace std;

int main(){

    char str = 'A';
    char &st = str;
    char *p;
    p = &st;
    cout<<st<<endl<<str<<endl;
    cout<<p<<endl;
    return 0;
}