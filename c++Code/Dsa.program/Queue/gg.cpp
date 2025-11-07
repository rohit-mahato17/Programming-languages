//This line copies all elements from q1 into a new queue q2.
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q1;

    q1.push(10);
    q1.push(20);
    q1.push(30);
    

    queue<int> q2(q1);
    while(!q2.empty()){
        cout<<q2.front()<<endl;
        q2.pop();
    }

     return 0;
}
