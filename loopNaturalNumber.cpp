#include<iostream>
using namespace std;


int main() {

    int nums, sum=0;

    cout<<"Enter Value of Number : ";
    cin>>nums;

    for (int i = 1; i < nums; i++)
    {
         sum = sum+i;
        cout<<"Sum is : "<<sum;
    }
    


    return 0;
}