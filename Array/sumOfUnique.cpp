// Program: Sum of unique elements in an array
// Author: Manish Sharma
// Date: 13-Jan-2026
// Description: Program to print sum of unique elements in an array(unique elements are those who occur only 1 time in an array)
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,2,4};
    int sum = 0;
    int n = 5;
    for(int i = 0; i<n; i++){
        bool found = false;
        for(int j = 0 ;j<n; j++){
            if(i==j){
                continue;
            }
            else if(arr[i]==arr[j]){
                found = true;
                break; //Not a unique element
            }
        }
        if(found == false){
            sum+=arr[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}