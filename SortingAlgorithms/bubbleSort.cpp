// Program: Bubble Sort
// Author: Manish Sharma
// Date: 20-Jan-2026
// Description: Program to sort elements in an array in ascending order using Bubble sort
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
    for(int i = 0 ;i<n-1;i++){
        bool swapped = false;
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swapped = true;
                swap(&arr[j],&arr[j+1]);
            }
        }
        if(!swapped){
            return 0;
        }
    }

    cout<<"\nAfter sorting...\n";
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}