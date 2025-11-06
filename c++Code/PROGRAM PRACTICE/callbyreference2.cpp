#include<iostream>
using namespace std;

void swappointer(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


int main(){
int a=4, b=5;
cout<<"the value of x is "<<a<<endl<<"the value of y is "<<b<<endl;
swappointer(&a,&b);
cout<<"the value of a swap "<<a<<endl<<"the value of b swap "<<b<<endl;
return 0;
}

























