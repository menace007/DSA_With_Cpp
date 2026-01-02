// Program: Sum of all digits
// Author: Manish Sharma
// Date: 02-Jan-2026
// Description: Prints the sum of all the digits of a given number by user input
#include<iostream>
using namespace std;
int main(){
    int num, sum=0, rem;
    cout<<"Enter the number: ";
    cin>>num;
    while(num!=0){
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    cout<<"The sum of the given number is: "<<sum<<endl;
    return 0;
}