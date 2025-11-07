#include<iostream>
#include<stack>
using namespace std;
int main(){
        //creation of stack
        stack<int> st;
        
        //insertion
        st.push(10);
        st.push(20);
        st.push(30);
    
        //size of stack
        cout<<"Size of sstack is:"<<st.size()<<endl;
        //Delation
        st.pop();

        if(st.empty()){
            cout<<"Stack is empty"<<endl;
        }else{
            cout<<"Stack is non empty"<<endl;
        }

         cout<<"The top value: "<<st.top()<<endl;

       return 0;
}
