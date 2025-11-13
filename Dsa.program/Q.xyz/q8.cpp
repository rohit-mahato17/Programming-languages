//Write a program to remove space in string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="Geek for Geek";
    int n=str.length();

    for(int i=0; i<n; i++){
        if(str[i] != ' '){
            cout<<str[i];
        }
    }
}