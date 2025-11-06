#include<iostream>
 using namespace std;
/*  int main(){
    int a=1;
    int b=1;
    int n=a    +   b;
    int c=a-- || --b;
    int d=a-- && --b;
    cout<<a<<b<<c<<d<<n<<endl;
    return 0;
 }*/
 /*int main(){

   int more;
   cout<<"enter the more value";
   cin>>more;

   if(more>80){
      cout<<"rocket"<<endl;

   }
   else if(more>50){
      cout<<"low rocket"<<endl;

   }else{
      cout<<"kharab rocket";
   }
   return 0;
 }*/
 int main(){

   int sp,cp;
   cout<<"enter selling price";
   cin>>sp;
   cout<<"enter cost price";
   cin>>cp;

   if(sp>cp){
      int calculate=sp-cp;
      cout<<"your profit is"<<calculate<<endl;
   }else if(cp>sp){
      int calculate=cp-sp;
      cout<<"your loss is:"<<calculate<<endl;
   }else{
      cout<<"both are equal no profit no loss";
   }
   return 0;
 }