//call by value
// #include<iostream>
// using namespace std;
// void callbyvalue(int num){
//     num=num+10;
//     cout<<num;
// }
// int main(){
//     int num=100;
//     cout<<num<<endl;
//     callbyvalue(num);
// }

// // call by addres 
// #include <iostream>
// using namespace std;
// void funtion(int *p){
//     *p =*p+10;
//     cout<<"pointer value:"<<*p;
// }
// int main() {
//     // Write C++ code here
//     int num;
//     cout<<"enter the value: ";
//     cin>>num;
//     cout<<"original value"<<num<<endl;
//     funtion(&num);
//     return 0;
// }

//call by reference
// #include<iostream>
// using namespace std;
// int main(){
//     int a=100;
//     cout<<a<<endl;
//     int &ref=a;
//     cout<<ref<<endl;
//     cout<<++ref<<endl;
//     cout<<a;
    
// }

#include<iostream>
using namespace std;
int main(){
    int num=10;
    cout<<num/2;
    return 0;
}