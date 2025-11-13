#include<bits/stdc++.h>
using namespace std;
    class Node{
    public:
     int data;
     Node* next;
    
      Node(){   //non-pa constructor
        cout<<"practise"<<endl;
         this->next = NULL;
      }
      Node(int data){    //parameterized constructor
        cout<<"Work"<<endl;
        this->data = data;
        this->next = NULL;
      }
       
};
  void printLL(Node* head){
    Node* temp = head; 
  }

int main(){

    //Node a;   //static
    Node* head=new Node(10);                          //
  // Node* first=new Node(10);  //dynamic allocation    //  both condition constructor call are there
  // Node* second=new Node(30);
  // Node* third=new Node(50);
  // Node* forth=new Node(60);
  // Node* fifth=new Node(70);  
}
