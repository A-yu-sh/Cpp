#include<iostream>
using namespace std;

int main() {
    int Arr[10], key;
    cout<<"Enter 10 elements for the array : ";
    for(int i=0; i<10; i++){
        cin>>Arr[i];
        cout<<"The Array Elements Are : "<<Arr[i]<<endl;
    };
    cout<<"Enter The Value for the key : ";
        cin>>key;

      for(int j=0; j<10; j++)
      {
          if(Arr[j]== key){
            cout<<"The Key "<<Arr[j]<<" is Present";
            return 0;
        }
        
      }
 cout<<"The key is Missing"<<endl;
   
return 0;
     
}