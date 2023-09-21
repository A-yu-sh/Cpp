#include<iostream>
using namespace std;

class Rectangle {
    public:
    int length;
    int breadth;

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2 * (length + breadth);
    }
};


int main(){

    Rectangle rect1, rect2;

    cout<<"Enter Value for the length of Rectangle 1 : ";
    cin>>rect1.length;

    cout<<"Enter Value for the Breadth of Rectangle 1 : ";
    cin>>rect1.breadth;

    cout<<"The Area is : "<<rect1.area()<<endl;
    cout<<"The Perimeter is : "<<rect1.perimeter()<<endl;


    return 0;
}