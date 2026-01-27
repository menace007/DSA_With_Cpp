// Program: Finding peak index of mountain array using Binary Search
// Author: Manish Sharma
// Date: 27-Jan-2026
// Description: Program to return peak index of element in a mountain array using binary search
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,7,10,14,17,19,21,18,14};
    int start = 1, end = 7;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            cout<<"The peak index is: "<<mid<<endl;
            break;
        }
        else if(arr[mid]>arr[mid-1]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    return 0;
}