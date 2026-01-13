// Program: Find the second largest element in an array
// Author: Manish Sharma
// Date: 13-Jan-2026
// Description: Program to find the second largest element in an array
#include<iostream>
using namespace std;
int main(){
    int arr[]={12,35,1,10,34,1};
    int n = 6;
    int largest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    // Now find second largest element;
    int secondLargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==largest){
            continue;
        }
        else if(arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
    cout<<secondLargest<<endl;
    return 0;
}