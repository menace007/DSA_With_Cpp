// Program: Triangle pattern
// Author: Manish Sharma
// Date: 23-Dec-2025
// Description: Prints a right angled triangle, inverted right angled triangle, and pyramid of stars based on user input
#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    cout<<"Enter n: ";
    cin>>n;
    //Normal Rt angled triangle
    // for(i=0;i<n; i++){
    //     for(j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //Inverted right angled trianble
    // for(i=0;i<n;i++){
    //     for(j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //Another side rt angled triangle
    // for(i=0;i<n;i++){
    //     for(j=0;j<n-i-1;j++){
    //         cout<<"  ";
    //     }
    //     for(j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
       
    //     cout<<endl;
    // }

    // Pyramid triangle
     for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<"* ";
        }
       
        cout<<endl;
    }
}