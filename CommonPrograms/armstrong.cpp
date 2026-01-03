// Program: Armstrong number
// Author: Manish Sharma
// Date: 03-Jan-2026
// Description: Checks whether a given number is armstrong number or not based on user input
#include<iostream>
using namespace std;
int main(){
    int num, rem, ans = 0;
    cout<<"Enter the number: ";
    cin>>num;
    int original = num;
    while(num){
        rem = num % 10;
        ans = ans + rem*rem*rem;
        num = num / 10;
    }
    if(ans==original){
        cout<<original<<" is armstrong number.";
    }
    else{
        cout<<original<<" is not a armstrong number.";
    }
    return 0;
}