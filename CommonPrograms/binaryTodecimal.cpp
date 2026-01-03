// Program: Binary to decimal conversion
// Author: Manish Sharma
// Date: 03-Jan-2026
// Description: Converts binary number to decimal number based on user input
#include<iostream>
using namespace std;
int main(){
    int ans=0, rem, num, mul = 1;
    cout<<"Enter decimal number: ";
    cin>>num;
    while(num){
        rem = num % 10;
        ans = ans + rem * mul;
        num = num / 10;
        mul*=2;
    }
    cout<<ans<<endl;
    return 0;
}