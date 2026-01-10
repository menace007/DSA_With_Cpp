// Program: Find the missing element in the given array from 1 to size where elements to be are from 1 to size + 1
// Author: Manish Sharma
// Date: 10-Jan-2026
// Description: Program to find the missing element from 1 to size where one element is missing from 1 to size + 1
#include<iostream>
using namespace std;
int main(){
    // int arr[7]={8,2,4,5,3,7,1};
    // int size = 7;
    // int n = 8;
    // Naive Approach or bruteforce approach
    /*for(int i=1;i<=n;i++){
        bool found = false;
        // Array traverse for particular value i
        for(int j=0;j<size;j++){
            if(arr[j]==i){
                found = true;
                break;
            }
        }
        if(found == false){
            cout<<i<<endl;
        }
    }*/

// Sum approach
 /*  int arr[4]={5,3,2,1};
   int size = 4, n = 5;
   int totalSum = (n * (n+1))/2;
//    int currentsum = 0;
   for(int i = 0; i<size; i++){
        // currentsum+=arr[i];
        totalSum-=arr[i];
   }
//    cout<<totalSum - currentsum;
   cout<<totalSum<<endl;
*/

// Xor Approach  a^a = 0, a^a^x = x
int arr[4] = {5,3,2,1};
int size = 4, n = 5;
int x = 0;
for(int i = 0; i<size ;i++){
    x = x ^ arr[i];
}
for(int i = 1; i<=n; i++){
    x = x^i;
}
cout<<x<<endl;

   return 0;
}