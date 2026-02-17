// Program: Triplet sum
// Author: Manish Sharma
// Date: 14-Feb-2026
// Description: Program to return true or false if such triplet pair exists whose sum is equal to target
#include<iostream>
using namespace std;
int main(){
    // Assume array will always be sorted
    int arr[]={1,4,6,8,10,15};
    bool found = false;
    int n = 6, target = 13;
    for(int i=0;i<n-2;i++){
        int start = i+1, end = n-1;
        int newTarget = target - arr[i];
        while(start<end){
            if(arr[start]+arr[end]==newTarget){
                cout<<"Found triplet: "<<arr[i]<<" "<<arr[start]<<" "<<arr[end]<<endl;
                found = true;
                break;
            }
            else if(arr[start]+arr[end]<newTarget){
                start++;
            }
            else{
                end--;
            }
        }
        if(found){
            break;
        }
    }
    if(!found){
        cout<<"Not found "<<endl;
    }
    return 0;
}