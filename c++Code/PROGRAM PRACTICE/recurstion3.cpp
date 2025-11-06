#include<iostream>
using namespace std;
int factorial(int n){
    //base case
    if(n==1 || n==0){
        return 1;
    }
    //processing
    //recursion relation
    int recursionkaANS = factorial(n-1);

    int finalans=n*recursionkaANS;
    return finalans;
}
int main(){
    cout<<factorial(5)<<endl;
    return 0;
}
