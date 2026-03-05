#include <iostream>
#include <queue>
using namespace std;
int main()
{
    //creation
    queue<int> q;

    //inseartion
    q.push(5); 

    cout<<"Size of Queue: "<<q.size()<< endl;

    if(q.empty() == true){
          cout<<"Queue is empty" <<endl;
    }else{
         cout<<"Not empty";
    }
    q.pop();

    cout<<"size of Queue:"<<q.size() <<endl;

    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"front element of  Queue is: "<<q.front()<<endl;
    cout<<"ptinr the value of back: "<<q.back()<<endl;
   
    return 0; 
 
}