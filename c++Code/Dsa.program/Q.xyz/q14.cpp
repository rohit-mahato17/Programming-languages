#include<bits/stdc++.h>
using namespace std;
bool checkyear(int year){
    
    if(year % 400 == 0){
        return true;
    }
    else if(year % 100 == 0){
        return false;
    }else if(year % 4 == 0){
        return true;
    }

    return false;
}
int main(){
    int year=2000;
     
    if(checkyear(year)){
        cout<<"Leap year";
    }
    else
       cout<<"Not a Leap Year"<<endl;

       return 0;
}