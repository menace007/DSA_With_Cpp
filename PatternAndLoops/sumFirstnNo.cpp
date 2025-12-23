// Sum of first n numbers
// Author: Manish Sharma
#include<iostream>
using namespace std;
int main(){
    int i, sum=0, n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum of first "<<n<<" numbers is: "<<sum<<endl;
    return 0;
}