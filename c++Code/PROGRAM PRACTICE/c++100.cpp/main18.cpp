//Write a Program to Check Whether a Number is an Armstrong Number or Not
#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n=153;
   int remp=n;
   int ans=0;

   while(n>0){
    int rem=n%10;
    ans=(ans)+(rem*rem*rem);
    n=n/10;
   }


   if(remp == ans){
    cout<<"yes,it is armstrong number";
   }else{
    cout<<"no,it is not an armstrong number";
   }

   return 0;
}