// Program: Square root of a number using Binary Search
// Author: Manish Sharma
// Date: 24-Jan-2026
// Description: Program to implement square root of a number using binary search
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    // Naive approach
    /*if(num==0){
        cout<<"Zero"<<endl;
    }
    int i = 1;
    while(i*i<=num){
        i++;
    }
    cout<<"The given number square root is "<<i-1;
    */
    if(num<2){
        cout<<"The square root is: "<<num<<endl;
    }
    int start = 1, end = num/2, ans = 0;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(mid==num/mid){
            cout<<"Sqrt: "<<mid<<endl;
            return 0;
        }
        else if(mid<num/mid){
            ans = mid;
            start =mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    cout<<"Square root: "<<ans<<endl;
    return 0;
}