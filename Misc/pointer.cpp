 #include<iostream>
using namespace std;

int main(){
    int num = 10;
    int &number = num;
    int *p;
    p=&num;
    cout<<number<<endl;
    cout<<p<<endl;
    return 0;
}


