#include<iostream>
using namespace std;
int main(){
    //3D arrays using pointers
    int ***arr = new int**[3];
    
    for(int i=0;i<3;i++){
        arr[i] = new int*[5];
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            arr[i][j] = new int[6];
        }
    }

    //Values add
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<6;k++){
                arr[i][j][k] = i+j+k;
            }
        }
    }

    //Print
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<6;k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

return 0;
}