#include<iostream>
using namespace std;
bool binarysearch(int arr[], int start, int end, int target){
    if(start>end){
        return 0;
    }
    int mid = start+(end-start)/2;
    if(arr[mid]==target){
        return 1;
    }
    else if(arr[mid]>target){
        return binarysearch(arr,start,mid-1,target);
    }
    else{
        return binarysearch(arr,mid+1,end,target);
    }
}
int main(){
    int arr[]={1,2,3,5,7,11,15,19,23,28};
    bool ans = binarysearch(arr,0,9,3);
    if(ans==1){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
return 0;
}