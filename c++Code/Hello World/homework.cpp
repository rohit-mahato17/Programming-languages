#include<iostream>
 using namespace std;
 int main(){
    char ch;
   // cout<<"enter the value";
    cin>>ch;
    while(ch='a'||ch='b'||ch='c'||ch='d'||ch='z' ){
        cout<<"lowercase";
    }
     if(ch='A'||ch='B'||ch='C'||ch='D'||ch='Z'){
        cout<<"upper case";
   } else{
        cout<<0;
    }
    return 0;
 }