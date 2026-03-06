// Program: 2-D Array(transpose)
// Author: Manish Sharma
// Date: 06-March-2026
// Description: Transpose of a matrix
#include<iostream>
using namespace std;
int main(){
    int oarr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout<<"Original array: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<oarr[i][j]<<" ";
        }
        cout<<endl;
    }
    int tarr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            tarr[j][i]=oarr[i][j];
        }
    }
    cout<<"Transpose of array: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<tarr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}