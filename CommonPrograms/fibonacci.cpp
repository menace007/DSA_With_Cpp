// Program: Fibonacci series for given no of terms
// Author: Manish Sharma
// Date: 03-Jan-2026
// Description: Prints fibonacci series of a given number(terms) based on user input
#include<iostream>
using namespace std;
int main(){
    int num, first = 0, second = 1, current;
    cout<<"Enter the number of terms you want: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        cout<<first<<" ";
        current = first + second;
        first = second;
        second = current;
    }
    return 0;
}