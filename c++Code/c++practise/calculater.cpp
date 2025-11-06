//eright a program to make a calculater
#include<iostream>
using namespace std;
int main(){
    char op;
    double a,b,res;
    
    cout<<"Enter and operator ";
    cin>>op;
    
    cout<<"enter two number";
    cin>>a>>b;
    
   switch (op){
    case '+':
        res=a+b;
        break;
    case '-':
        res=a-b;
        break;
    case '*':
        res=a*b;
        break;
    case '/':
        res=a/b;
        break;
    default:
        cout<<"operator is not mached";
        return 0;
    }
    cout<<"the value of "<< op <<" is = "<<res;
    return 0;
}