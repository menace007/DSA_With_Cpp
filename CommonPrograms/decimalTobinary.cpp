// Program: Decimal to binary conversion
// Author: Manish Sharma
// Date: 03-Jan-2026
// Description: Converts decimal number to binary number based on user input
#include<iostream>
using namespace std;
int main(){
    int ans=0, rem, num, mul = 1;
    cout<<"Enter decimal number: ";
    cin>>num;
    while(num){
        rem = num % 2;
        ans = ans + rem * mul;
        num = num / 2;
        mul*=10;
    }
    cout<<ans<<endl;
    return 0;
}