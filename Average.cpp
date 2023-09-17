#include<iostream>
using namespace std;

int main(){
    int arr[10],n,avg=0;
    int value = 0;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    cout<<"Enter the elements in array : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        value = value+arr[i];
        
    }
    avg = value/n;
    cout<<"The Average is : "<<avg;
    return 0;
}