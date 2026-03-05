#include<iostream>
using namespace std;

int main(){
    // string n="Hello world";
    //      cout<<n.size();
    // int n=5;
    //  for(int i=1;i<=n;i++){
    //     cout<<i<<endl;
    //  }    
    int a,b;

    cout<<"Enter the value of n:";
    cin>>a;
    
    if(30<=a){
        cout<<"Aligibal for vote";
    }else if(50>a){
        cout<<"Aligible but sinear sitagion";
    }else{
        cout<<"Not aligibale";
    }
    
    return 0;
}
