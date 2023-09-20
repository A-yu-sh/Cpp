#include<iostream>
using namespace std;

int main() {

    int arr[5]= {1010,5892,6510,98301,45012};
    int max = arr[0];

    for(int i=0; i<5; i++){
        if(arr[i]<max){
            max=arr[i];
        }
    }
    cout<<"Maximum is : "<<max<<endl;

    return 0;
}