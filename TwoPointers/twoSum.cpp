// Program: Two sum
// Author: Manish Sharma
// Date: 14-Feb-2026
// Description: Program to return index of two elements in an sorted array whose sum is equal to target
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,9,18,27,31};
    int n = 5, target = 90;
    int start = 0, end = n-1;
    while(start<end){
        if(arr[start]+arr[end]==target){
            cout<<"Start index: "<<start<<" End index: "<<end<<endl;
            break;
        }
        else if(arr[start]+arr[end]<target){
            start++;
        }
        else{
            end--;
        }
    }
    return 0;
}