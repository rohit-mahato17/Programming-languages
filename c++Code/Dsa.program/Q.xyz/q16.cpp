//write a program to print palindrome or not
#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(int n){

    int ans=0;
    int temp=n;
    while(temp != 0){
        ans=(ans*10)+(temp%10);
        temp=temp/10;
    }
    return (ans == n);
}
int main(){
    int n=12321;

    if(checkpalindrome(n) == 1){
        cout<<"Yes" <<endl;
    }
    else{
        cout<<"No" <<endl;
    }

    return 0;
}        
