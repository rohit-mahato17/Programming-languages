//The dice problem
#include<iostream>
using namespace std;
int printProblam(int n){

    if(n == 1){
        return 6;
    }
    else if(n == 2){
        return 5;
    }
    else if(n == 3){
        return 4;
    }
    else if(n == 4){
        return 3;
    }
    else if(n == 5){
        return 2;
    }
    else if(n == 6){
        return 1;
    }

    return 0;
}
int main(){
    int n=7;
    int go = printProblam(n);
    if(go != 0){
        cout<<"The value of n: "<<go<<endl;
    }
    else{
        cout<<"not present value sorry"<<endl;
    }
    return 0;
}
