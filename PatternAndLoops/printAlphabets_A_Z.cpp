// Print Alphabets from A to Z
// Author: Manish Sharma
#include<iostream>
using namespace std;
int main(){
    // char i;
    // for(char i='a'; i<='z';i++){
    //     cout<<i<<" ";
    // }
    
    int i;
    for(int i = 97;i<=122;i++){
        //Typecasting ASCII Numbers
        cout<<char(i)<<" ";
    }
    return 0;
}