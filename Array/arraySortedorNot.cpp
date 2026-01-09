// Program: Array is sorted or not
// Author: Manish Sharma
// Date: 09-Jan-2026
// Description: Checks whether a given array is in non decreasing order or not
#include<iostream>
using namespace std;
int main(){
    int arr[5]={100,20,20,30,40};
    int count=0;
    for(int i = 0; i < 4; i++){
        if(arr[i]<=arr[i+1]){
            count++;
        }
    }
    if(count==4){
        cout<<"All elements are in increasing order"<<endl;
    }
    else{
        cout<<"The elements are not in increasing order"<<endl;
    }
    return 0;
}