//inline funtion
#include<iostream>
using namespace std;

inline  int  funtion(int a, int b){

    return a*b;
}
 inline int add(int a,int b){   
    return a+b;

} 

int main(){   
 int a=10,b=60;   

//cout<<"enter the value main funtion "<<a*b<<endl;
cout<<"enter the value  funtion "<<funtion(a,b)<<endl;
cout<<"rnter the value  funtion "<<add(a,b); 
}
