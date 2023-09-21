// ------------------------------------------------
//  RECTANGLE USING POINTER
// ------------------------------------------------

#include<iostream>
using namespace std;

class RECTANGLE {
    public:
    int length;
    int breadth;

    int area(){
        return length * breadth;
    }

    int Perimeter(){
        return 2 * (length + breadth);
    }
};

int main(){

    RECTANGLE *P;
    P = new RECTANGLE;
    P -> length = 10;
    P -> breadth = 5;

    cout<<P->area()<<endl;
    cout<<P->Perimeter();


    return 0;
}