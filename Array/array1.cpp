// Program: Problem Solving in Array
// Author: Manish Sharma
// Date: 09-Jan-2026
// Description: Problem solving in array
#include<iostream>
#include<vector>
using namespace std;
void printValue(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
//     int arr[5]={10,20,30,40,50};
//     printValue(arr, 5);
// Another way to initialize or declare array
    vector<int> arr(5);
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    arr.push_back(90);
    cout<<"Size: "<<arr.size()<<endl;
    cout<<"Capacity: "<<arr.capacity()<<endl;
    for(int i = 0 ;i < arr.size();i++){
        cout<<arr[i]<<" ";
    } 

    return 0;
}