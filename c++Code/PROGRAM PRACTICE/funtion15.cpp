#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int a=12;
    int b=14;
    max(a,b);
}
