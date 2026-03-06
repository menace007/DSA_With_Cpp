// Program: 2-D Array
// Author: Manish Sharma
// Date: 27-Feb-2026
// Description: Understanding 2d arrays
#include<iostream>
using namespace std;
int main(){
    //Create 2d array
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}