// Program: Alphabet triangle pattern
// Author: Manish Sharma
// Date: 02-Jan-2026
// Description: Prints a Alphabet triangle based on user input
#include<iostream>
using namespace std;
int main(){
    char ch='A';
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }
    return 0;
}