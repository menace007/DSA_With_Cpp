// Program: Star Pattern
// Author: Manish Sharma
// Date: 23-Dec-2025
// Description: Prints a square of stars based on user input
#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    cout<<"Enter n: ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}