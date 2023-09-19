#include<iostream>
using namespace std;

int BINARY_SEARCH(int arr[], int size, int key){
    int beg = 0;
    int end = size - 1;
    int mid = (beg+end)/2;

    while (beg<=end)
    {
        if(arr[mid] == key){
            return mid;
        }
        else if (key > arr[mid])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }  
        mid = (beg+end)/2;
    }
    return -1;
}

int main(){

    int arr[10], n, key;
    cout<<"Enter number of elements in array : ";
    cin>>n;

    cout<<"Enter Elements For the Array (in sorted format) : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter The Key Value : ";
    cin>>key;

    int res = BINARY_SEARCH(arr, n, key);
    
    (res == -1) ? cout<<"Key Not Found" : cout<<"Key Found at Index : "<<res;

    return 0;
}