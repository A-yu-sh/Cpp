#include <iostream>
using namespace std;

class RECTANGLE{
    private:
        int length;
        int breadth;
    public:
        void setLength(int len){
            length = len;
        };
        void setBreadth(int wide){
            breadth = wide;
        };
        int getLength(){
            return length;
        };
        int getBreadth(){
            return breadth;
        };

        int area(){
            return length * breadth;
        }
};


int main(){

    RECTANGLE r;

    r.setLength(10);
    r.setBreadth(5);
    cout<<r.area();


    return 0;
}