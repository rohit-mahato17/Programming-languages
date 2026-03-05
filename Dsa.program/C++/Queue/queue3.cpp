#include<bits/stdc++.h>
using namespace std;
class Deque{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        arr= new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }



    void pushBack(int val){
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
    }
    else{
      rear++;
      arr[rear] = val;
    }
    }

    void pushFront(int val){
        //overflow
        //empty
        //normal flow
         if(front == 0 && rear == size-1 || rear == front-1){
      cout<<"Overflow" <<endl;
    }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[front]= val;
        }
        else if(front == 0 && rear != size-1){
            front = size-1;
            arr[front] = val;
        }
        else{
             front--;
             arr[front]= val;
        }
    }

    void popFront(){
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

    void popBack(){
       //underflow
       //single element
       //normal flow
       if(front == -1 && rear == -1){
        cout<<"Underflow" <<endl;
       }
       else if(front == rear){
         arr[rear]=-1;
         front = -1;
         rear = -1;
       }
       else if(rear == 0){
        arr[rear]= -1;
        rear = size-1;
       }
       else{
        arr[rear]= -1;
        rear--;
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
   Deque q(5);

    q.pushFront(10);
    q.print();

    q.pushF(20);
    q.print();

    q.pushFront(30);
    q.print();

    q.pushFront(40);
    q.print();

    q.pushFront(50);
    q.print();

    q.pushFront(60);
    q.print();

   return 0;

}