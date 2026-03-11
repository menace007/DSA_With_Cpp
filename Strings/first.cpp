// Program: Strings concepts and some code
// Author: Manish Sharma
// Date: 09-Mar-2026
// Description: String concepts and some code basic level
#include<iostream>
using namespace std;
int main(){
    // string s = "Manish";
    // cout<<s<<endl;
    // cout<<s.size()<<endl;
    // string s1; 
    // cin>>s1;
    // getline(cin, s1);
    // cout<<s1<<endl;
    // string s1 = "Manish";
    // string s2 = "Mohit";
    // Concatenation
    // cout<<s1+" "+s2<<endl;
    //Append only one character using push_back 
    // string s3 = s1 + s2;
    // s3.push_back('t');
    // cout<<s3<<endl;
    // s3.pop_back();
    // cout<<s3<<endl;

    //Character
    // char c = 'a'+3;
    // cout<<c;
    //Character array => string
    // char c[7] = {'M','a','n','i','s','h','\0'};
    // cout<<c<<endl;
    // cout<<c[4]<<endl;
    // char d[11] = "Shubhanshu";
    // cout<<d<<endl;
    // cout<<d[4]<<endl;
    // int arr[5]={1,2,3,4,5};
    // cout<<arr;
    string s = "MANISH";
    // cout<<s<<endl;
    for(int i=0;i<7;i++){
        cout<<char(s[i]+32);
    }
    return 0;
}