// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//          while(j<=n){
//            cout<<i<<"*"<<j<<"="<<i*j<<endl;
//            j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int s=1;
//         int j=1;
//          while(j<=n-i+1){
//            cout<<"*";
//            j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int add(int a,int b){
//   int sum=a+b;
//   return sum;
// }
// int main(){
// int a=10;
// int b=40;
//  cout<<add(a,b);   
// }

#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for (int i = a; i <= b; i++){
        if (isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}