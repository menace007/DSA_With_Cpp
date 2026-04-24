#include<iostream>
using namespace std;
int add(int *p, int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum+=p[i];
    }
    return sum;
}
int main(){
    // int a = 10;
    // int *ptr = &a;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;
    // int arr[5] = {1,2,3,4,5};
    // for(int i=0;i<5;i++){
    //     // cout<<arr[i]<<" ";
    //     cout<<*(arr+i)<<" ";
    // }
    // cout<<endl;
    // int *p = arr;
    // for(int i=0;i<5;i++){
    //     cout<<*(p+i)<<" ";
    // }
    // int ans = add(arr, 5);
    // cout<<ans;
    // char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    // cout<<arr<<endl;
    //Dynamic memory allocation
    // int *p = new int[10];
    // cout<<"Input the 10 integers: ";
    // for(int i=0;i<10;i++){
    //     cin>>p[i];
    // }
    // cout<<"\nOutput: ";
    // for(int i=0;i<10;i++){
    //     cout<<p[i]<<" ";
    // }
    // delete[] p;

    //2D array using pointers
    int **arr = new int *[5];
    for(int i=0;i<5;i++){
        arr[i] = new int[6];
    }
    cout<<arr<<endl;
    //Insert values in 2d array
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            arr[i][j] = i+j;
        }
    }
    //Print values
     for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}