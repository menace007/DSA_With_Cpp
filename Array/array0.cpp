// Program: Array Concepts
// Author: Manish Sharma
// Date: 08-Jan-2026
// Description: Array concepts and some programs
#include<iostream>
using namespace std;
int main(){
    int marks[5] = {70, 80, 40, 50, 90};
    // Highest marks in the class
    int highest=marks[0];
    for(int i=1;i<5;i++){
        if(marks[i]>highest){
            highest=marks[i];
        }
    }
    cout<<highest<<endl;

    // Linear search
    int key = 40;
    for(int i=0;i<5;i++){
        if(key==marks[i]){
            cout<<"Found"<<endl;
            return 0;
        }
    }
    cout<<"Not found";
    // int sum = 0;
    // for(int i = 0 ;i < 5; i++){
    //     cout<<marks[i]<<" ";
    //     sum+=marks[i];
    // }
    // int avg = sum / 5;
    // cout<<"\nAvg: "<<avg<<endl;

    // int arr[3],i;
    // cout<<"Enter 3 values: ";
    // for(i=0;i<3;i++){
    //     cin>>arr[i];
    // }
    // cout<<"\nThe entered values are: "<<endl;
    // for(i=0;i<3;i++){
    //     cout<<arr[i]<<" ";
    // }

    return 0;
}