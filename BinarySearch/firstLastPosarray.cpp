// Program: find the starting and ending position of a given target value.
// Author: Manish Sharma
// Date: 22-Jan-2026
// Description: find the starting and ending position of a given target value.Return an array of two integers [start index, end index] representing the first and last occurrence of the target in the array. If the target is not found, return [-1, -1].Example 1:
// Input: nums = [1, 2, 3, 3, 3, 3, 4, 5], target = 3
// Output: [2, 5]
// Explanation:
// The element 3 first appears at index 2 and last appears at index 5.
// So the output is [2, 5].
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,3,3,4,5};
    int target = 3;
    int n = 8;
    int start = 0, end = n-1;
    int firstIndex = -1;
    // For firstIndex let us find using binary search
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            firstIndex = mid;
            end = mid-1;
        }
        else if(arr[mid]<target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    // For lastIndex let us find using binary search
    start = 0, end = n-1;
    int lastIndex = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            lastIndex = mid;
            start = mid+1;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }

    cout<<"The first and last index are: "<<firstIndex<<" , "<<lastIndex<<endl;

    return 0;
}