#include<iostream>
 using namespace std;

  bool isprimenumber(int num){
   
   bool isprime=true;
     for(int i=2;i<num;i++){
         if(num%2==0){
            isprime=false;
         } 
     }
   return isprime;
 }

 int main(){

     int num;
     cout<<"enter the value"<<num<<endl;
     cin>>num;
 
   //   bool isprime=true;
   //   for(int i=2;i<num;i++){
   //       if(num%2==0){
   //          isprime=false;
   //       } 
   //   }
   bool isprime=isprimenumber(num);
     if(isprime){
        cout<<"prime number"<<endl;
     }else{
        cout<<" NOT prime NUMBER"<<endl;
     }
 }