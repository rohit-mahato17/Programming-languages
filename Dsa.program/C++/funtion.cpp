#include<iostream>
using namespace std;

/*
int printHello(int a, int b){  //funtion declaration
    int sum = a+b;

    return sum;
}

int main() {
    int a = 10;
    int b = 20;
    cout<<"The value is: "<<printHello(a,b); //calling funtion
    return 0;
}
*/

/*
int sum(int n){
    int Total = 0;

    for(int i=0; i<=n; i++){
        Total += i;
    }
    return Total;
}

int main(){
    cout<<"The value is: " <<sum(5)<<endl;
    cout<<"The value is: " <<sum(15)<<endl;

    return 0;
}
*/

//calculate sum of digits of a number

// int funtionN(int num){
//     int digitsum = 0;

//     while(num > 0){
//        int lastdig = num%10;
//        num = num/10;

//        digitsum += lastdig;
//     }
//     return digitsum;
// }

// int main(){
//      cout<<"The sum of digits:"<<funtionN(145)<<endl;
     
//     return 0;
// }

int factorial(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int ncr(int n,int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n/(fact_r*fact_nmr);
}

int main(){
    int n=8, r=2;
    cout<<ncr(n,r) <<endl;
    return 0;
}
