//write a program to find the gretest of the three number.
#include<iostream>
 using namespace std;
 int main(){

    int a=10, b=40, c=80;
    cout<<"the greatest among three number is :"<<endl;
     if(a>=b && a>=c){
        cout<<"the a value :"<<a<<endl;

     }else if(b>=a && b>=c){
        cout<<"the b value :"<<b<<endl;

     }else{
        cout<<"the c value :"<<c<<endl;
     }
     return 0;

 }