// Program: Reverse any number
// Author: Manish Sharma
// Date: 03-Jan-2026
// Description: Reverses any integer number based on user input

#include<iostream>
using namespace std;
int main(){
    int ans=0, rem, num;
    cout<<"Enter the num: ";
    cin>>num;
    while(num){
        rem = num % 10;
        ans = ans*10 + rem;
        num = num/10;
    }
    cout<<ans<<endl;
    return 0;
}