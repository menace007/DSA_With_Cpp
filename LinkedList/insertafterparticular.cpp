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
  for(int i=0;i<5;i++){
      if(head==NULL){
        head = new Node(arr[i]);
        tail = head;
      }
      else{
        Node *temp = new Node(arr[i]);
        temp->next= head;
        head = temp;
      }
  }
  //Traverse the linked list
  Node *temp = head;
  while(temp!=NULL){
      cout<<temp->data<<" -> ";
      temp = temp->next;
  }
  cout<<"NULL"<<endl;

  //Insert after particular value say 30 in this case and we need to insert 100
  temp = head;
  while(temp->data != 30){
    temp = temp->next;
  }
  Node *newNode = new Node(100);
  newNode->next = temp->next;
  temp->next = newNode;  
  //Traverse the updated linkedlist
  temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" -> ";
    temp = temp->next;
  }
  cout<<"NULL"<<endl;
return 0;
}