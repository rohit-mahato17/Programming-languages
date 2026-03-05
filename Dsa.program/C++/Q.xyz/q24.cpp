//Find factorial of a Number
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int fact=1;
    for(int i=1; i<=n; i++){
       fact *= i;
    }

    cout<<"The value on fact:"<<fact<<endl;
}
