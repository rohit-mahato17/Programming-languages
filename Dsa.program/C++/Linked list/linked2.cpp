#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
     
    Node(){ //default constructor
        cout<<"default constructor"<<endl;   //both call are call here
        this->next =NULL;            
    }
    
    Node(int data){ //constructor because parameter declare
        cout<<data<<"->";
        this->data = data;
        this->next = NULL; 
    }
};
    
int main(){
   // Node a;//static allocation
   // Node* head=new Node(); //dynamic allocation
    Node* first=new Node(10); 
    Node* second=new Node(19); 
    Node* third=new Node(18); 
    Node* fourth=new Node(16); 
    Node* fifth=new Node(14);                              
}
 