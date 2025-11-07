//implement a min stack  /*/
#include<bits/stdc++.h>
using namespace std;

class Minstack{
    private:
    stack<int> mainstack;
    stack<int> minstack;

    public:
    void push(int val){
        mainstack.push(val);

        if(minstack.empty() || val <= minstack.top()){
            minstack.push(val);
        }
    }

    void pop(){
        if(mainstack.empty())return;
        int topVal=mainstack.top();
        mainstack.pop();
        if(!minstack.empty() && topVal == minstack.top()){
            minstack.pop();
        }
    }

    int top(){
        if(mainstack.empty())return -1;
        return mainstack.top();
    }

    int getmin(){
        if(minstack.empty())return -1;
        return minstack.top();
    }

    bool empty(){
        return mainstack.empty();
    }
};
int main(){
     Minstack st;
     st.push(5);
     st.push(3);
     st.push(7);

     cout<<"minimun: "<<st.getmin()<<endl;
     st.pop();
     cout<<"Top: "<<st.top()<<endl;
     cout<<"mininum: "<<st.getmin()<<endl;
     st.pop();
     cout<<"minimum: "<<st.getmin()<<endl;

     return 0;

} 