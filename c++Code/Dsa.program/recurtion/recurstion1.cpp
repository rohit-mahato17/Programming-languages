//Write a program to print recursion
#include<iostream>
using namespace std;
int factorial(int n){
    //base case
    if(n == 1){
        return 1;
    }if(n==0){
        return 1;
    }
    //processing

    //recursive relation
    // int ans= n* factorial(n-1);
    int recursion=factorial(n-1);
    int ans=n*recursion;
     return ans;
    //processing
}
int main(){
     int n=5;
     cout<<factorial(n);
}
