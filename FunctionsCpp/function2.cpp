// Program: Function Concepts
// Author: Manish Sharma
// Date: 07-Jan-2026
// Description: Functions and its concepts with some basic level functions
#include<iostream>
using namespace std;
void youtube(string photo, string title, int views, int time){
    cout<<"Thumbnail: "<<photo<<endl;
    cout<<"Title: "<<title<<endl;
    cout<<"Views: "<<views<<endl;
    cout<<"Upload Time: "<<time<<endl;
}
int square(int number){
    return number*number;
}
int main(){
    // youtube("photo0.jpg", "Hook", 1000, 5);
    // youtube("photo1.jpg", "Javascript", 1400, 11);
    // int ans = square(5);
    // cout<<ans<<endl;
    return 0;
}
