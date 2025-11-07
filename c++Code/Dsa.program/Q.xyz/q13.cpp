//write a program to find the factorial on nth number
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;


    for(int i=n;i>0;i--){
        fact *= i;
    }
    return fact;
}
int main(){
    int n=5;

    cout<<factorial(n);
}