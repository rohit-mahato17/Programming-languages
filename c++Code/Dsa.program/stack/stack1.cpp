// stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
      stack<int> st;
      
      st.push(10); //insertion
      st.push(20);
      st.push(30);
      
      cout<<"Size of stack:"<<st.size()<<endl;
      st.pop();      //delation
          
      if(st.empty()){
        cout<<"Stack is empty"<<endl;
      }else{
        cout<<"Stack is none empty"<<endl;
      }
         
      cout<<st.top()<<endl;
      return 0;
}
