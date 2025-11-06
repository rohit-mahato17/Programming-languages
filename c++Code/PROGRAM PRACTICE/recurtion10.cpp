#include<iostream>
using namespace std;
int square(int n){
    if(n==0){
        return 1;
    }

    int pup=2*square(n-1);
    return pup;
}
int main(){
    int n=9;
    cout<<square(n);
}