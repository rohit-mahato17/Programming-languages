#include<iostream>
using namespace std;
int main(){

    int a=4;
    int*b=&a;
    int**c=&b;//pointer to pointer
     cout<<&a<<endl;               //address 
     cout<<b<<endl;               //address  
    //&-->(address of)operator
    //*-->(value at)deferance operator
    cout<<*b<<endl;             //value
    cout<<&b<<endl;            //address of 
    cout<<&b<<endl;               //address of 
    cout<<&c<<endl;               //address of 
    cout<<**c<<endl;              //value
    cout<<*c<<endl;               //address of 
    cout<<c<<endl;               //address of 
}