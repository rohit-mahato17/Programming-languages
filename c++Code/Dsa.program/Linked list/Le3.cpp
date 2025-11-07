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
        // cout<<"Work"<<endl;
        this->data = data;
        this->next = NULL;
      }
       
};
  void printLL(Node*head){
    Node* temp = head; 

    while(temp != NULL){
        cout<< temp->data<<"->";
        temp=temp->next;
    }
    cout << endl; 
  }

   int getlength(Node* head){
    Node* temp =head;
    int count=0;

    while(temp != NULL){
        count++;
        temp = temp-> next;
    }
    return count;
   }

int main(){

    //Node a;   //static
    // Node* head=new Node();                          
   Node* first=new Node(10);  
   Node* second=new Node(30);
   Node* third=new Node(50);
   Node* fourth=new Node(60);
   Node* fifth=new Node(70);  

   first->next =second;
   second->next =third;
   third->next =fourth;
   fourth->next =fifth;
   //Link list create ho chuki h

   Node* head = first;
   cout<<"Printing the entire LL" <<endl;
   printLL(head);
    cout<<"length of linked list is= "<<getlength(head)<<endl;   
   return 0;
}
