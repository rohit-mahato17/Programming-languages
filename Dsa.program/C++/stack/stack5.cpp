#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> st;
    st.push("abc");
    st.push("def");
    st.push("ghi");

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
     
    return 0;
}
