#include<iostream>
using namespace std;



int main() {

int val = 0;
int sum[5] = {10,20,20,40,10};

// for(int i=0; i<5; i++){
//     val = val+sum[i];
//     cout<<"Sum is : "<<val<<endl;
// }

for(auto x:sum){
    val = val+x;
    x++;

}
    cout<<"Sum is : "<<val<<endl;
    return 0;
}