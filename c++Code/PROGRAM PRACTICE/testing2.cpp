#include<iostream>
 using namespace std;
  int main(){

    int n;
    cout<<"enter the value ";
    cin>>n;

    int popo=1;
    while(popo<=n){
        int lol=1;
        while(lol<=n){
            cout<<n-lol+1;
            lol++;
        }
        cout<<endl;
        popo++;
    }
    return 0;
  }