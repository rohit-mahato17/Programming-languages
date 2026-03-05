//Write a program to find a leap year
#include<iostream>
using namespace std;
int checkYear(int year){

    if(year % 400 == 0){
        return false;
    }
    else if(year % 300 == 0){
        return false;
    }else if(year % 100 == 0){
        return true;
    }
    
    return false;
}
int main(){
    int year=2000;
    
    if(checkYear(year)){
        cout<<"Leav year";
    }else{
        cout<<"Not Leav year";
    }
}