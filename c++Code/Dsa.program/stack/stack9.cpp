#include<iostream>
#include<stack>
using namespace std;
void printpush(stack<int> &st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    if(st.empty()){
       cout<<"Empty the stack";
    }
}
int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    printpush(st);
}
 