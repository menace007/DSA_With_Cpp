#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int age, rollNo;
        //Constructor
        Student(string n1, int ag1, int roll1){
            name = n1;
            age = ag1;
            rollNo = roll1;
        }
};
class Customer{
    public:
        string name, bankName;
        int age, balance, accountNo;
};
int main(){
    // Student s; //Here s is a object of class Student
    // s.name = "Manish";
    // s.age = 25;
    // s.rollNo = 01;
    // cout<<s.name<<" "<<s.age<<" "<<s.rollNo<<endl;
    // s.name = "Manish Sharma";
    // cout<<s.name<<" "<<s.age<<" "<<s.rollNo<<endl;
    
    // Customer c1;
    // c1.name = "Menace";
    // c1.bankName = "SBI";
    // c1.age = 25;
    // c1.balance = 5000;
    // c1.accountNo = 1001;
    // cout<<c1.name<<" "<<c1.bankName<<" "<<c1.age<<" "<<c1.balance<<" "<<c1.accountNo<<endl;

    // Student s1;
    // s1 = s;
    // cout<<s1.name<<" "<<s1.age<<" "<<s1.rollNo<<endl;

    Student s2("Boat Sharma", 23, 1001);
    cout<<s2.name<<" "<<s2.age<<" "<<s2.rollNo<<endl;
    Student *s3 = new Student("Anshul", 30, 1004);
    cout<<(*s3).name<<" "<<(*s3).age<<" "<<(*s3).rollNo<<endl;
    cout<<s3->name<<" "<<s3->age<<" "<<s3->rollNo<<endl;
return 0;
}