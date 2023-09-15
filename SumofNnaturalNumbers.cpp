#include<iostream>
using namespace std;

int main() {

    int sum, n;

// Sum of N Natural numbers 
// The formula is sum = n*(n+1)/2

    cout<<"Enter Value For N : ";
    cin>>n;

    sum = n*(n+1)/2;
    cout<<"The Sum of Natural Numbers are : "<<sum;

    return 0;
}