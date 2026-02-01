// Program: Search in Rotated Sorted Array
// Author: Manish Sharma
// Date: 28-Jan-2026
// Description: Program to search in a rotated sorted array and return its index using binary search
#include<iostream>
using namespace std;
int main(){
    int arr[]={100,200,300,400,10,20,30,40};
    int n = 8, key = 1;
    int start = 0, end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        //If found return mid
        if(arr[mid]==key){
            cout<<"Found at index: "<<mid<<endl;
            return 0;
        }
        //Left portion
        else if(arr[mid]>=arr[0]){
            if(key>=arr[start]&&key<arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        // Right portion
        else{
            if(key>arr[mid]&&key<=arr[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    cout<<"Not found"<<endl;
    return 0;
}