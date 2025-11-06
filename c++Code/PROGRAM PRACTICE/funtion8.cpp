#include<iostream>
using namespace std;

//int sum(int,int){
int sum(int a,int b){
    int c=a+b;
    return c;
}
int main(){

int a;
cout<<"enter the value a ";
cin>>a;
int b;
cout<<"enter the value b ";
cin>>b;

cout<<" enter the value "<<sum(a,b)<<endl;

return 0;
}
// int sum(int a,int b){
//     int c=a+b;
//     return c;
// }