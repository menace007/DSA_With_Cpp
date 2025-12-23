//Print the pattern code using loops
//Author: Manish Sharma
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter n: ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}