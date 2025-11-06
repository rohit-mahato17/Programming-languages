#include<iostream>
using namespace std;
int funtion(int a, int b){
    int ans=1;
      int i=1;
    while(i<=b){
     ans=ans*a;
     i++;
    }
    //cout<<ans<<endl;
    return ans;
}

int main(){

    int a,b;
    cin>>a>>b;
    int ans=funtion(a,b);
    //funtion(a,b);
    cout<<ans;
    return 0;
}