
// //wright a program to print even or odd number
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter aney number:";
//     cin>>a;
//     if(a % 2 == 0){
//         cout<<"even number";
//     }
//     else{
//         cout<<"odd number";
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int a;
    for(int i=1;i<=5;i++){
        cout<<"even or odd number:";
          cin>>a;
    if(a % 2 == 0){
        cout<<"even number"<<endl;
    }
    else{
        cout<<"odd number"<<endl;
    }
    }
}