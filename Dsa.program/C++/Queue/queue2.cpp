//circular queue
#include<bits/stdc++.h>
using namespace std;
class Queue{
  public:
  int* arr;
  int size;
  int front;
  int rear;

  Queue(int size){
    arr=new int[size];
    this->size=size;
    front=-1;
    rear=-1;
    
  }
  
  void push(int val){
    //overflow
    //empty case
    //circular nature
    //normal flow
    //wrong check for important
    if(front == 0 && rear == size-1 || rear == front-1){
      cout<<"Overflow" <<endl;
    }
    //wrong check for important
    else if(front == -1 && rear == -1){
       front++;
       rear++;
       arr[rear]=val;
    }
    else if(rear == size-1 && front != 0){
      rear = 0;
      arr[rear]=val;
    }else{
      rear++;
      arr[rear] = val;
    }
  }

  void pop(){
    //overflow
    //singleelement
    //circular nature
    //normal flow
    if(front == -1 && rear == -1){
      cout<<"Underflow"<<endl;
    }
    else if(front == rear){
      arr[front] =-1;
      front = -1;
      rear = -1;
    }
    //wrong check for important
    else if(front == size-1){
      arr[front] = -1;
      front =0;
    }
    else{
      arr[front] = -1;
      front++;
    }
  }

  void print(){
      cout<<"Printing Queue: ";
      for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
      }
      cout << endl;
  }
   
};
int main(){
    Queue q(5);
       
    q.push(10);
    q.print();

    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();

    q.push(50);
    q.print();

    q.push(60);
    q.print();

    q.pop();
    q.pop();
    q.pop();
    q.print();

    q.push(100);
    q.print();

    q.push(200);
    q.print();

    q.push(300);
    q.print();

    q.push(400);
    q.print();

    return 0;
}