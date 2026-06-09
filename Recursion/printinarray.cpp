#include<iostream>
using namespace std;
void PrintArr(int arr[], int index, int n){
    if(index == n){
        return;
    }
    cout<<arr[index]<<" ";
    PrintArr(arr, index+1, n);
}
int main(){
    int arr[] = {2, 3, 5, 4, 1, 9};
    PrintArr(arr, 0, 6);
return 0;
}