//funtion overloading
#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
int mul(int a,int b){
    return a*b;
}
int main(){

    cout<<"The value is addition"<<add(8,8)<<endl;
    cout<<"The value is multiplicatio"<<mul(8,8)<<endl;
    return 0;
}