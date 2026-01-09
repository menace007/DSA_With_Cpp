// Program: Problem Solving in Array
// Author: Manish Sharma
// Date: 09-Jan-2026
// Description: Reverse a given array
#include<iostream>
using namespace std;
void reverseArr(int arr[], int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}
int main(){
    int arr[5]={10,15,18,22,28};
    reverseArr(arr, 5);
    for(int i = 0 ;i < 5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}