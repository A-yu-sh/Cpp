#include<iostream>
using namespace std;

#include <cmath>

int main(){
    int a,b,c;
    float r1,r2;

    cout<<"Enter Value for a, b and c : ";
    cin>>a>>b>>c;

    r1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    r2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<r1<<endl;
    cout<<r2;

    return 0;
}