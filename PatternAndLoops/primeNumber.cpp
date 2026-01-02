// Program: Prime number
// Author: Manish Sharma
// Date: 02-Jan-2026
// Description: Checks whether a given number is prime or not based on the user input
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num<2){
        cout<<num<<" is not a prime number.";
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            cout<<num<<" is not a prime number.";
            return 0;
        }
    }
    cout<<num<<" is a prime number.";
    return 0;
}