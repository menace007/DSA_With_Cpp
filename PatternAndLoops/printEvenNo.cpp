//Print even numbers
//Author: Manish Sharma
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the number: ";
    cin>>n;
    // for(i=1;i<=n;i++){
    //     if(i%2==0)
    //         cout<<i<<" ";
    // }
    for(i=2; i<=n; i=i+2){
        cout<<i<<" ";
    }
    return 0;
}