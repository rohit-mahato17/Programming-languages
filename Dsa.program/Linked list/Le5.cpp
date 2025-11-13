//how to create a tale
#include<bits/stdc++.h>
using namespace std;
    class Node{
    public:
     int data;
     Node* next;
    
      Node(){   //non-pa constructor
        // cout<<"practise"<<endl;
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
        temp = temp->next;
    }
    cout << endl; 
  }
 
 void insertAHead(Node* &head,int data){     //bhaiya na ya par passby reference karnatha(&) lakin passby value kardiya tha
//create a new node            
  Node* newNode = new Node(data);
//attach new node to head node
  newNode -> next =head;
//update head
 head= newNode;
 }

void insertAtTail(Node* &head,Node* &tail, int data){
  if(head == NULL){
    //empty LL
    Node* newNode = new Node(data);
     //step2:single node h eitire list me,t
     //that's why  headand tail ko isper point kar3wado
     head = new Node;
     tail = new Node;
  }else{
     //non-empty LL
     //step1: create new node
     Node* newNode = new Node(data);
     //step2: tail node ko attach karo newNaode se
     tail->next = newNode;
     //step:3 update tail
     tail = newNode;

  }
}
 
void createTail(Node* head,Node* &tail){
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp->next;
    }
        tail = temp;
}

int main(){
  
 Node* head = NULL;
 Node* tail = NULL;

 insertAHead(head,tail,10);
 insertAHead(head,tail,20);
 insertAHead(head,tail,30);

 printLL(head);
//     //Node a;   //static
//     // Node* head=new Node();                          
//    Node* first=new Node(10);  
//    Node* second=new Node(30);
//    Node* third=new Node(50);
//    Node* fourth=new Node(60);
//    Node* fifth=new Node(70);
//    Node* tail = fifth;  
  
//    first->next =second;
//    second->next =third;
//    third->next =fourth;
//    fourth->next =fifth;
//    //Link list create ho chuki h

//    Node* head = first;
//    cout<<"Printing the entire LL" <<endl;
//    printLL(head);                        //funtion calling 

//   //  insertAHead(head,500);
//     insertAtTail(head , tail , 500);
 
//    printLL(head);
//    // cout<<"length of linked list is= "<<getlength(head)<<endl;   
   return 0;
  
}
