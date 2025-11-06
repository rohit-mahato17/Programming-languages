#include<iostream>
 using namespace std;
  int main(){
    int n;
    cout<<"enter aney number";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"value of sum"<<sum<<endl;
    return 0;

  }