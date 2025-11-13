// //Write a program to find Nth of the fibonacci serise
// #include<iostream>
// using namespace std;
// int fib(int n){
//     int first= 0 ,second = 1 ,ans;
    
//     if(n==0){
//         return first;
//     }

//     for(int i=2;i<=n;i++){
//         ans = first + second;
//         first = second;
//         second = ans;
//     }

//     return ans;
// }
// int main(){
    
//     int n=13;
//     cout<<fib(n);

//     return 0;
// }

//Print first n terms of Fibonacci series
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: "<<endl;
//     cin>>n;

//     int a=0, b=1,ans;

//     if(n == 0){
//         return a;
//     }

//     for(int i=2; i<=n; i++){
//         cout<<a<<" ";
//         ans= a+b;
//         a=b;
//         b=ans;
//     }
//     cout<<endl;
//     cout<<ans;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n){
//     int a=0, b=1, c;

//     if(n == 0){
//         return a;
//     }

//     for(int i=2; i<=n; i++){
//         cout<<a<<" ";
//         c = a+b;
//         a = b;
//         b = c;
//     }
//     cout<<endl;
//     return c;

// }
// int main(){
//  int n;
//  cout<<"Enter the value of n: ";
//  cin>>n;

//  cout<<"Total of fib:"<<fib(n);

//  return 0;
// }

#include<iostream>
using namespace std;
int fib(int n){
    int a=0, b=1, ans;

    for(int i=2; i<=n; i++){
        cout<<a<<" ";
        ans=a+b;
        a=b;
        b=ans;
    }
    cout<<endl<<"Nth number of fibo: "<<ans;
}
int main(){
    int n=13;

    fib(n);

    return 0;
}