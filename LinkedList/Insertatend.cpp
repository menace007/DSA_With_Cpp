#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int value){
            data = value;
            next = NULL;
        }
};
int main(){
    int arr[5]={10,20,30,40,50};
    Node *head = NULL, *tail = NULL;
    //Create first node
    for(int i=0;i<5;i++){
        //First node create
        if(!head){
            head = new Node(arr[i]);
            tail = head;
        }
        else{//Create other nodes by adding element in the end
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }
    //Traverse the linkedlist
    tail = head;
    while(tail!=NULL){
        cout<<tail->data<<" -> ";
        tail = tail->next;
    }
    cout<<"NULL";
return 0;
}