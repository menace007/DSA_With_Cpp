// Program: Rotate the array by one position in clockwise direction
// Author: Manish Sharma
// Date: 12-Jan-2026
// Description: Program to rotate the array by one position in clockwise direction
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int temp = arr[4];
    for(int i = 4;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    cout<<"After rotating..."<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}