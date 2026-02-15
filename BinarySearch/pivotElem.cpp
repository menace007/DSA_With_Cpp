// Program: Find minimum pivot element in rotated array
// Author: Manish Sharma
// Date: 15-Feb-2026
// Description: Program to find the minimum pivot element in a rotated array
#include<iostream>
using namespace std;
int findPivot(int arr[], int n){
    int start = 0, end = n-1;
    while(start<end){
        int mid = start+(end-start)/2;
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return arr[start];
}
int main(){
    int arr[]={7,9,1,2,3};
    int n = 5;
    int pivot = findPivot(arr, n);
    cout<<"Pivot element: "<<pivot<<endl;
    return 0;
}