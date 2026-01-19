// Program: Selection Sort
// Author: Manish Sharma
// Date: 19-Jan-2026
// Description: Program to sort elements in an array in ascending order using Selection sort
#include<iostream>
using namespace std;
int swap(int *x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int arr[]={64,25,12,22,11};
    int n = 5;
    for(int i = 0; i<n; i++){
        int index = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(&arr[index], &arr[i]);
    }
    for(int i = 0 ;i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}