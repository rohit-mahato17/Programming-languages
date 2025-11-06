#include<iostream>
using namespace std;

class Node{
public:
      int data;
      Node* next;

//default constructor
      Node(){
        cout<<"I am inside default constructor";
        this->next = NULL;
      }
// parameterized constructor      
      Node(int data){
        this->data = data;
        this->next = NULL;
      }
};
  
  void print(Node* head){
      Node* temp=head;

      while(temp != NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
      }
      cout<<endl;
  }

  int getlength(Node* head){
      Node* temp = head;
      int count=0;

      while(temp != NULL){
       count++;
       temp=temp->next;
      }
      cout<<"length of the linked list is:"<<count<<endl;
  }
int main(){
 
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
 
   Node* head = first;
   print(head);
   getlength(head);
    return 0;
} 