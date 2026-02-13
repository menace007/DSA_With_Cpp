// Program: Two sum II
// Author: Manish Sharma
// Date: 13-Feb-2026
// Description: Program to find the sum equal to target and return their index using binary search
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, target;
    cout<<"Enter the size of array: ";
    cin>>n; //Size of array
    vector<int> nums(n);
    cout<<"Enter the values for array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Enter the value for target: ";
    cin>>target;
    int start = 0, end = n-1;
    while(start<end){
        int sum = nums[start]+nums[end];
        if(sum == target){
            cout<<start+1 <<" "<<end+1<<endl;
            return 0;
        }
        else if(sum<target){
            start++;
        }
        else{
            end--;
        }
    }
    cout<<"No solution found"<<endl;
    return 0;
}