#include<iostream>
using namespace std;

class Node{
public:
      int data;
      Node* next;

//default constructor
      Node(){
        cout<<"I am a done constructor";
        this->next = NULL;
      }
// parameterized constructor      
      Node(int data){
        this->data = data;
        this->next = NULL;
      }
};

int main(){

    Node a;
}