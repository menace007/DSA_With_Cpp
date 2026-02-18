// Program: Split array into two equal sum sub arrays
// Author: Manish Sharma
// Date: 18-Feb-2026
// Description: Program to return true or false if the array can be divided into sub arrays whose sum are equal
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5};
    int n = 6, totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
    }
    if(totalSum%2){
        cout<<"Not possible"<<endl;
        return 0;
    }
    int required = totalSum/2;
    int prefixSum = 0;
    for(int i=0;i<n-1;i++){
        prefixSum+=arr[i];
        if(prefixSum==required){
            cout<<"Possible"<<endl;
            return 0;
        }
    }
    cout<<"Not possible!"<<endl;
    return 0;
}