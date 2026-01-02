// Program: Number triangle pattern
// Author: Manish Sharma
// Date: 25-Dec-2025
// Description: Prints a number triangle based on user input
#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    cout<<"Enter n: ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}