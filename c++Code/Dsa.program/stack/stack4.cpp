//stack
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      stack<int> s1;

//      s1.push(10);
//      s1.push(20);
//      s1.push(30);
//      s1.push(40);
//      s1.push(50);

//      while(!s1.empty()){
//         cout<<s1.top() <<endl;
//         s1.pop();
//      }
// }


//Queue
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string> str;
    str.push("abcd");
    str.push("efgh");
    str.push("ijkl");
    str.push("mnop");
    str.push("qrst");

    while (!str.empty())
    {
        cout<<str.front()<<endl;
        str.pop();
    }
}
