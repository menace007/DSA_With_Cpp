// Program: Insertion Sort
// Author: Manish Sharma
// Date: 20-Jan-2026
// Description: Program to sort elements in an array in ascending order using Insertion sort
#include<iostream>
using namespace std;
int swap(int *x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int arr[]={10,5,18,4,2};
    int n = 5;
    for(int i = 1;i<n;i++){
        for(int j = i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
            }
        }
    }

    cout<<"\nAfter sorting...\n";
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}