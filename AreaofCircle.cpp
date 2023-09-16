#include <iostream>
using namespace std;
#include <cmath>


int main() {
    float radius, area;

    cout<<"Enter Radius of the circle : ";
    cin>>radius;

    // Area of Circle formula is 3.12*r*r
     area = 3.12f*pow(radius, 2);

     cout<<"Radius of Circle is : "<<area<<endl;
}