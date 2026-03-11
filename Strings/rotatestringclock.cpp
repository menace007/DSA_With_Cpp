#include<iostream>
using namespace std;
int main(){
    string s = "amazon";
    int n = 6;
    for(int i=0;i<2;i++){
        int temp = s[n-1];
        for(int j=n-1;j>0;j--){
            s[j]=s[j-1];
        }
        s[0] = temp;
    }
    cout<<s<<endl;
    return 0;
}