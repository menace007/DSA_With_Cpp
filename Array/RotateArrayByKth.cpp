// Program: Rotate the array by kth position in clockwise direction
// Author: Manish Sharma
// Date: 12-Jan-2026
// Description: Program to rotate the array by kth position in clockwise direction
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int k = 3;
    //Brute force unoptimized approach
    /*while(k!=0){
        int temp = arr[4];
        for(int i = 4;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        k--;
    }
    */

    // Optimized approach->Using another array of same size
    /*int arrt[4];
    for(int i=0;i<4;i++){
        arrt[(i+k)%4]=arr[i];
    }*/

    // Another approach -> without using another array
    //Reverse 1 position in clockwise direction
    int temp = arr[4];
    for(int i=4;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    temp = arr[3];
    for(int i=3;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    cout<<"After rotating..."<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}