#include<iostream>
 using namespace std;
    //funtion prototypes
 int sum(int a,int b){
       int c=a+b;
       return c;
 }
 void g(){
   cout<<"hello sir";
 }
 
 int main(){
    int num1,num2;
    cout<<"enter the value num1 "<<endl;
    cin>>num1;
    cout<<"enter the value num2 "<<endl;
    cin>>num2;
    cout<<"the sum is"<<sum(num1,num2);
    return 0;
 }
