//Implemwnt Queue from scratch
#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr = new int [size];
        this->size = size;
        front = - 1;
        rear = -1;
    }

    void push(int val){
      //check
      if(rear == val){
      cout <<" Queue overflow" << endl;
      return;
      }else if(front == -1 && rear == -1){
          //empty case
          front++;
           rear++;
           arr[rear]=val;
      }else{
        //nprmal case
        rear++;
        arr[rear]=val;
      }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout<<"Queue is underflow" <<endl;
            return;
        }else if(front == rear){
              //empty casse->single element
              arr[front] = -1;
              front = -1;
              rear = -1;
        }else{
            arr[front] = -1;
            front++;
        }
    }
    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }else{
            return false;
        }
    }

    int  getsize(){
        if(front == -1 && rear == -1){
            return 0;
        }else{
            return rear-front+1;
        }
    }
    int getFront(){
        if(front == -1){
            cout<< " Not element in queue canot give front element " << endl;
            return -1;
        }else{
            return arr[front]; 
        }
    }

    void print(){
        cout<< "printing Queue" <<endl;
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

     void print(){
        cout<<"print  Queue: ";
        for(int i=0;i<size;i++){
            cout<<arr[i] <<" ";
        }
        cout << endl;
     }

};
int main(){
     Queue q(5);
     q.print();

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

     cout<<"size of queue: "<<q.getsize()<<endl;

    q.pop();
    q.print(); 

     cout<<"Queue is empty: "<<q.isEmpty()<<endl;

     return 0;    
}
