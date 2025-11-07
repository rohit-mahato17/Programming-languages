#include<bits/stdc++.h>
using namespace std;
string Alphabate(string str){
    int n=str.length();

    string resultg=" ";
    for(int i=0; i<n; i++){
        if(isalpha(str[i])){
            resultg += str[i];
        }
    }
    return resultg;
}
int main(){
    string str="Geek$for$Geeks";

    cout<<Alphabate(str);
}

