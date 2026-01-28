// Program: Finding minimum element in rotated array using Binary Search
// Author: Manish Sharma
// Date: 28-Jan-2026
// Description: Program to print minimum element in rotated array using binary search
#include<iostream>
using namespace std;
int main(){
    // int arr[]={1,2,3,4,5,6};
    int arr[]={4,5,6,1,2,3};
    int n = 6;
    int start = 0, end = n-1;
    int minElement = arr[0];
    while(start<=end){
        int mid = start+(end-start)/2;
        // Left sorted
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        // Right sorted
        else{
            minElement = arr[mid];
            end = mid - 1;
        }
    }
    cout<<"The minimum element in this rotated array is: "<<minElement<<endl;
    return 0;
}