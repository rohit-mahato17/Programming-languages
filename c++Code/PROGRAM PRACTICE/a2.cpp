#include<iostream>
using namespace std;
int print(int n){
int sum=0;
for(int i=1;i<=n;i++){
    sum=sum+i;
}
cout<<sum;
}
int main(){
  print(5);
}
