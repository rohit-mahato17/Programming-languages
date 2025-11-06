#include<iostream>
 using namespace std;
 int primeno(int num){
    cout<<"primeno"<<num;
 }

 int main(){

    int number;
    cout<<"number";
    cin>>number;

    if(number%2==0){
        cout<<"not prime"<<endl;
        primeno(number);
    }
    else{
        cout<<"prime no"<<endl;
        primeno(number);
    }
    return 0;
 }