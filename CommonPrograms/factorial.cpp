// Program: Factorial of a number
// Author: Manish Sharma
// Date: 03-Jan-2026
// Description: Prints factorial of a given number based on user input
#include<iostream>
using namespace std;
int main(){
    int num, fact = 1;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        fact = fact * i;
    }
    cout<<fact<<endl;
    return 0;
}