// Program: Functions concept
// Author: Manish Sharma
// Date: 04-Jan-2026
// Description: Functions with different programs
#include<iostream>
using namespace std;
// Factorial of a number
int factorial(int num){
    int fact = 1, i;
    for(i=1;i<=num;i++){
        fact = fact * i;
    }
    return fact;
}
// Sum of 2 numbers
int sum(int a, int b){
    return a+b;
}
// Grade 
char findgrade(int marks){
    if(marks>=90){
        cout<<"Grade: A+"<<endl;
    }
    else if(marks>=80&& marks<90){
        cout<<"Grade: A"<<endl;
    }
    else if(marks>=70&&marks<80){
        cout<<"Grade: B+"<<endl;
    }
    else if(marks>=60&&marks<70){
        cout<<"Grade: B"<<endl;
    }
    else if(marks>=50&&marks<60){
        cout<<"Grade: C+"<<endl;
    }
    else if(marks>=40&&marks<50){
        cout<<"Grade: C"<<endl;
    }
    else{
        cout<<"Grade: Fail"<<endl;
    }
}
// Driver code  
int main(){
    int factans = factorial(5);
    cout<<"Factorial: "<<factans<<endl;
    int addition = sum(3,4);
    cout<<"Sum: "<<addition<<endl;
    findgrade(90);
    findgrade(30);
    return 0;
}