#include<iostream>
using namespace std;
int main(){
    int x=6;
    cout<<x<<endl;
    int*ptr =&x;
    //cout<<&x;
    cout<<*ptr<<endl;

    int* ptl =new int(543);
    cout<<*ptl<<endl;
}