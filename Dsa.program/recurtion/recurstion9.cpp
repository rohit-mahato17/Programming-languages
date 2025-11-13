//sum of the natural number
#include<iostream>
using namespace std;
int printno(int n){
    if(n==0){
      return 0;
    }

   int max=n+printno(n-1);
    return max;
}  

int main(){
    int n=5;
    cout<<"sum of the natural number:"<<printno(n)<<endl;
}

