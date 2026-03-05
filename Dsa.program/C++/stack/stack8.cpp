//reverse the stac k
#include<iostream>
#include<stack>
using namespace std;
void insertatbootom(stack<int> &st,int &element){
     
    if(st.empty()){
        st.push(element);
            return;
        
    }

    int temp=st.top();
    st.pop();

    insertatbootom(st,element);

    st.push(temp);
}
void reversestack(stack<int> &st){
    if(st.empty()){
        return;
    }

    int temp=st.top();
    st.pop();

    reversestack(st);

    insertatbootom(st,temp);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    // int element=400;
    // insertatbootom(st,element);
    reversestack(st);   

cout<<"with reverse: " <<endl;    
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}