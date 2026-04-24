#include<iostream>
using namespace std;
int printNto1(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    printNto1(n-1);
}
void printEven(int num){
    if(num==0){
        return;
    }
    cout<<num<<" ";
    printEven(num - 2);
}
void print1ton(int n,int num){
    if(n==num+1){
        return;
    }
    cout<<n<<" ";
    print1ton(n+1, num);
}
int sum1ton(int num){
    if(num==0){
        return 0;
    }
    return num + sum1ton(num-1);
}
int main(){
  int n;
//   cout<<"Enter even number:";
//   cin>>n;
//   printNto1(n);
//   cout<<endl;
//   printEven(n); 
//   cout<<endl; 
//   print1ton(1, n); 
 int sum =  sum1ton(5);
 cout<<sum<<endl;
return 0;
}