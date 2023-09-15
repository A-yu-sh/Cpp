#include <iostream>
using namespace std;

int main() {
    int perimeter, length, breadth;

    cout<<"Enter Length of the Rectangle : ",
    cin>>length;

        cout<<"Enter Breadth of the Rectangle : ",
    cin>>breadth;

    perimeter = 2*(length+breadth);

    cout<<"Perimeter is : "<<perimeter;

    return 0;

}