#include<iostream>
 using namespace std;
   int main(){

    int a,b,c,d;
    cout<<"a";
    cin>>a;
    cout<<"b";
    cin>>b;
    
    
    c=a;
    a=b;
    b=c;

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

    return 0;
   }
   
   
   /* int main(){   
       int a=10,b=20;

       swap(a,b);

       cout<<"a swapping="<<a<<endl;
       cout<<"b swaping="<<b<<endl;

    return 0;
   }*/