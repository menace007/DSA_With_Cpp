#include<iostream>
using namespace std;
// int result = 0;
// int Sum(int arr[], int index, int n){
//     if(index == n){
//         return 0;
//     }
//     result = result + arr[index];
//     Sum(arr, index+1, n);
//     return result;
// }
int Sum(int arr[], int index, int n){
    if(index == n)
        return 0;
    int ans = arr[index]+Sum(arr, index+1, n);
    return ans;
}
int main(){
    int arr[6] = {2,3,5,4,1,9};
    int ans = Sum(arr, 0, 6);
    cout<<ans<<endl;
return 0;
}