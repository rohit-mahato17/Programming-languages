#include<bits/stdc++.h>
using namespace std;
int reverse(string str,int n){
    if(n==0)
        return 0;
    else
      
    cout<<str[n-1];
    reverse(str,n-1);
    
 }
int main(){
    string str="Geeks for Geeks";
     int n=str.size();
    reverse(str,n);
return 0;
}