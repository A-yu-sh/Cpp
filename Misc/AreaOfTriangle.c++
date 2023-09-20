#include <iostream>
using namespace std;


int main(){
    int area, breadth, height;
    
    // The Mathematical Formula for area of triangle is a=1/2 bh

    cout<<"Enter Breadth of the Triangle : ";
    cin>>breadth;

    cout<<"Enter Height of the Triangle : ";
    cin>>height;

    area = 0.5*(breadth*height);

    cout<<"The Area of the triangle is : "<<area<<endl;

    return 0;
}