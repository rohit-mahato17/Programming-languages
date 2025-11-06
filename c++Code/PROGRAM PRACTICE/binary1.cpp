// print decimal to binary
#include<iostream>
using namespace std;
int main(){
    int decnum;
    cin>>decnum;
    while(decnum>0){
        int rem=decnum%2;
        cout<<rem<<endl;
        decnum=decnum/2;
    }
}       
