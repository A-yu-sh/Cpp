#include<iostream>
using namespace std;

int main() {

    // Lets print the multiplication tables;

    int Tablevalue, End_Value;
    cout<<"Enter the value(for the multiplication table : ) ";
    cin>>Tablevalue;

    cout<<"Enter the End value(for the multiplication table : ) ";
    cin>>End_Value;

    for (int i = 1; i < End_Value; i++)
    {
      int End_Value = Tablevalue*i;
      cout<<End_Value<<endl;
    }
    

    return 0;
}