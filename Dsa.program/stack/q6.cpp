#include<iostream>
using namespace std;
class Stack{
    public:
    int* arr;
    int size;
    int top;

    stack(int size){
          arr=new int[size];
          this->size = size;
          top = -1;
    }

    void push(int val){
        if(top == size-1){
            cout<<"Overflow" <<endl;
        }
        else {
            arr[top]=val;
            top++;
            cout<<val;
        }
    }

    void pop(){
        if(top == -1){
            cout<<"Underflow" <<endl;
        }else{
            top--;
            cout<< top ;
        }
        
    }

    int peek(){
        if(top == -1){
            cout<<" stack is empty";
            return -1;
        }else{
            return arr[top];
        }
    }
}
int main(){

}