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
  //Insert before the particular element say 40 here
  //Edge case check
  if(head->data == 40){
    Node *temp = new Node(900);
    temp->next = head;
    head = temp;
  }
  //If normal ll is there then traverse
  Node *prev = NULL, *curr = head;
  while(curr->data!=40){
    prev = curr;
    curr = curr->next;
  }
  Node *newNode = new Node(900);
  newNode->next = curr;
  prev->next = newNode;

//Traverse 
  temp = head;
  while(temp){
    cout<<temp->data<<" -> ";
    temp = temp->next;
  }
  cout<<"NULL";
return 0;
}