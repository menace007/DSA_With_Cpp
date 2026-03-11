#include<iostream>
using namespace std;
int main(){
    string s = "amazon";
    int n = 6;
    for(int i=0;i<2;i++){
        int temp = s[0];
        for(int j=0;j<n-1;j++){
            s[j]=s[j+1];
        }
        s[n-1] = temp;
    }
    cout<<s<<endl;
    return 0;
}