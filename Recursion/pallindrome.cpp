#include<iostream>
using namespace std;
bool Palindrome(string &s, int start, int end){
    if(start>=end)
        return true;
    if(s[start]!=s[end])
        return false;
    return Palindrome(s, start+1, end-1);
}
int main(){
    cout<<"True(1) means it is palindrome and false(0) means it is not palindrome"<<endl;
    string s = "NITEN";
    bool ans = Palindrome(s, 0, 4);
    cout<<ans<<endl;
return 0;
}