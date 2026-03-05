// Write a program to check wheather a Nmber is an armstrong or not

// #include<iostream>
// using namespace std;
// int main(){
//     int n=153;
//     int temp=n;
//     int ans=0;

//     while(n>0){
         
//         int rem=n%10;
//         ans =(ans)+(rem*rem*rem);
//         n=n/10;
//     }
//     if(temp == ans){
//         cout<<("Yes, it is a Armstrong Number");
//     }
//     else{
//         cout<<("No, it is not an Armstrong Number");
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n=153;
    int check=n;
    int ans=0;

    if(n == 0){
        cout<<ans;
    }

    while(n>0){
        int rem=n%10;
        ans =ans+rem*rem*rem;
        n=n/10;
    }
    if(check == ans){
        cout<<"Yes, the value of Armstrong";
    }
    else{
        cout<<"No, it' not a Armstrong";
    }

    return 0;
}