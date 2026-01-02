// Program: Palindrome number pattern
// Author: Manish Sharma
// Date: 02-Jan-2026
// Description: Prints a palindrome number triangle based on user input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        // For spaces
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        //Print increasing numbers
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        // Pring decreasing numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}