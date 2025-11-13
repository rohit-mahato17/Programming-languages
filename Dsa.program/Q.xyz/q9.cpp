//Write a program to 
#include<iostream>
#include<cctype>
#include<string>
using namespace std;
string operatosr(string str){
    string result="";
    for(char c:str){
        if(isalpha(c)){
            result += c;
        }
    }
    return result;
}

int main(){
    string str="Gee$ksfor$Geeks";
    cout<<"Alphabate only:"<<operatosr(str);
}
