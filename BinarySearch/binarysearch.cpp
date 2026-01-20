// Program: Binary Search
// Author: Manish Sharma
// Date: 20-Jan-2026
// Description: Program to implement binary search
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6,7,8};
    int target = 2;
    int start = 0;
    int end = 6;
    int mid = (start+end)/2;
    while(start<=end){
        if(target == arr[mid]){
            cout<<"Found"<<endl;
            return 0;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        else if(target>arr[mid]){
            start = mid+1;
        }
        mid = start+end/2;
    }
    return 0;
}