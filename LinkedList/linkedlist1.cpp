#include<iostream>
using namespace std;
class Customer{
    public:
        int age, balance;
        string name;
};
int main(){
  Customer *c1 = new Customer();
  cout<<c1<<endl;
  c1->name = "Manish";
  c1->age = 24;
  c1->balance = 1000;
  cout<<c1->name<<endl;
return 0;
}