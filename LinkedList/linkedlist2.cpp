#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        // Constructor
        Node(int value, Node* addr){
            data = value;
            next = addr;
        }
};
int main(){
//   Node N1(40, NULL);
//   N1.data = 10;
//   N1.next = NULL;
//   cout<<N1.data<<" "<<N1.next;
    Node *head = new Node(100, NULL);
    cout<<head->data<<" "<<head->next<<endl;
    Node *temp = new Node(20, NULL);
    head->next = temp;
    cout<<head->next<<" "<<head->next->data<<" "<<head->next->next<<endl;
return 0;
}