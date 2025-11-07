// decimal to binary number using recursion
#include<iostream>
using namespace std;
int printbinary(int n){
    
    if(n==0){
        return 0;
    }else{
        return(n % 2 + 10*printbinary(n/2));
    }
}
int main(){
    int num=10;
    cout<<printbinary(num)<<endl;
}