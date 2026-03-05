//Write a program to remove space from a string
#include<bits/stdc++.h>
using namespace std;
string remove_spaces(string str){
    string result="";
    for(char c : str){
        if(c != ' '){
            result += c;
        }
    }
    return result;
}

int main(){
    string str="GfG to the  moon";

    cout<<"Without space: "<<remove_spaces(str);
}