//Write a Program to Calculate the Greatest Common Divisor of Two Numbers
#include<iostream>
using namespace std;
int findfuntion(int num1,int num2){
    while(num2 != 0){
        int temp=num2;
        num2=num1 % num2;
        num1=temp;
    }
    return num1;
}

int main(){
    int num1=48;
    int num2=18;
 

    int gcd=findfuntion(num1,num2);

    cout<<"The value of num1 "<<num1<< " and"<< num2 <<" is "<<gcd<<endl;

    return 0;
}
