// Program: Function overloading, Call by reference(reference variable) Concepts
// Author: Manish Sharma
// Date: 07-Jan-2026
// Description: Functions overloading, reference variable and its concepts with some basic level functions
#include<iostream>
using namespace std;
// Function Overloading
int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}
//Reference variable concept
void increment(int &a){
    a++;
}
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
//Default argument
void printing(int n = 0){
    cout<<n<<endl;
}
// Prime number Function
int Isprime(int num){
    if(num<1){
        cout<<num<<" is not a prime number";
    }
    for(int i=2; i<=num; i++){
        if(num%i==0){
            cout<<num<<" is not a prime number";
            return 0;
        }
    }
    cout<<num<<" is a prime number.";
}
int main(){
    // int add1 = sum(2,3);
    // cout<<add1<<endl;
    // int add2 = sum(3,4,5);
    // cout<<add2<<endl;
    // int num = 10;
    // increment(num);
    // cout<<num<<endl;
    // int a = 3, b = 8;
    // cout<<"Before Swap: "<<a<<" "<<b<<endl;
    // swap(a,b);
    // cout<<"After swap: "<<a<<" "<<b<<endl;
    // printing(10);
    // printing();
    Isprime(77);
    return 0;
}