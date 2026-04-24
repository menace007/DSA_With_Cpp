#include<iostream>
using namespace std;
void birthdaycount(){
    for(int i=30;i>0;i--){
        cout<<i<<" days left for birthday"<<endl;
    }
    cout<<"Happy birthday"<<endl;
}
int BirthdayCount(int count){
    if(count == 0){
        cout<<"Happy Birthday bruh";
        return 0;
    }
    cout<<count<<" days left for birthday"<<endl;
    BirthdayCount(count - 1);
}
int main(){
    //normal loop without recursion
    // for(int i=30;i>0;i--){
    //     cout<<i<<" days left for birthday"<<endl;
    // }
    // cout<<"Happy birthday"<<endl;

    //By using function
    // birthdaycount();

    //Using recursion concept
    int count; 
    cin>>count;
    BirthdayCount(count);

    return 0;
}