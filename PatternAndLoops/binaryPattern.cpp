// Program: Binary Number triangle pattern
// Author: Manish Sharma
// Date: 02-Jan-2026
// Description: Prints a binary number triangle based on user input
#include<iostream>
using namespace std;
int main(){   
    int n;
    cout<<"Enter n: ";
    cin>>n;
     for(int i=1;i<=n;i++){
        bool num=i%2;
        for(int j=0;j<i;j++){
            cout<<num<<" ";
            num=!num;
        }
        cout<<endl;
        }
    return 0;
}