#include<iostream>
 using namespace std;
 
 bool iseven(int a){
    if(a&1){
        return 0;
    }else{
        return 1;
    }

 }
 int main(){

    int n;
    cout<<"enter the value";
    cin>>n;
    
    if(iseven(n)){
        cout<<"n is even"<<endl;
    }else{
        cout<<"n is odd"<<endl;
    }
    return 0;
 }
