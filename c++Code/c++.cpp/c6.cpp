//sum of digits of a number
#include<iostream>
using namespace std;
int gotofuntion(int n){
    

    if(n == 0)
    return 0;

    return (n%10)+gotofuntion(n/10);
}

int main(){
    int n=12345;
    cout<< gotofuntion(n);

    return 0;
}
