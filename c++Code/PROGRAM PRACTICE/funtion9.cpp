#include<iostream>
using namespace std;
int main(){

    int a,z;
    cin>>a>>z;
     int ans=1;
    for(int i=1;i<=z;i++){
       ans=ans*a;
    cout<<"the value is"<<ans<<endl;
    }
    return 0;
}