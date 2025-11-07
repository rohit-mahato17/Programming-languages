// // //Check prime number using resurtion
// // #include<iostream>
// // using namespace std;

// // bool isprime(int n, int i = 2) {
// //     if (n <= 1) return false;
// //     if (i * i > n) return true;  // No divisors found
// //     if (n % i == 0) return false; // Found a divisor
// //     return isprime(n, i + 1);     // Recursive call
// // }

// // int main() {
// //     int n = 9;
// //     if (isprime(n)) {
// //         cout << "Prime number";
// //     } else {
// //         cout << "Not prime number";
// //     }
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// // int reversestring(string str,int n){
    
// //      for(int i=n;i>=0;i--){
// //         cout<<str[i];
// //      }
// // }
// // int main(){
// //     string str="string";
// //     int n=str.length();
// //     reversestring(str,n);
// // }
// // int length(int n){
// //       if(n==0  || n==1){
// //         return 1;
// //       }
        
// //       return n*length(n-1);
            
// // }
// // int main(){
// //    int n=5;

// //     cout<<"Factorial of resurtion is: "<<length(n);

// // }


// int main(){
//     double num1,num2;
//     char op;

//     cout<<"Enter first number";
//     cin>>num1;
//     cout<<"Enter an operation";
//     cin>>op;
//     cout<<"Enter second number: ";
//     cin>>num2;

//     switch (op)
//     {
//     case '+':
//         cout<<"Result:"<<num1+num2;
//         break;
//     case '-':
//         cout<<"Result:"<<num1-num2;
//         break;
//     case '*':
//         cout<<"Result:"<<num1*num2;
//         break;
//    case '/':
//             if (num2 != 0)
//                 cout << "Result: " << num1 / num2;
//             else
//                 cout << "Error! Division by zero.";
//             break;
//     default:
//         cout<<"Invalid Operation";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
// int main(){
//     string str="12345";
//     int n=str.length()-1;


//     for(int i=n;i>=0;i--){
//         cout<<str[i];
//     }
//     return 0;
// }
//find factorial
// int fibnoachai(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     }
     
//     return n*fibnoachai(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the value: ";
//     cin>>n;
    
//     cout<<"your factorial number is:"<<fibnoachai(n);
//     return 0;
// }

//palindrome
// int main(){
//     string st="madam";
//     int s=0;
//     int e=st.length()-1;
// bool ispalindrome=true;
   
//    while(s < e){
//     if(st[s] != st[e]){
//         ispalindrome=false;
//         break;
//     }
//     s++;
//     e--;
//    }
//    if(ispalindrome == 1){
//     cout<<"Palindrome";
//    }else{
//     cout<<"Not palindrome";
//    }
  
//    return 0;
// }
//Print string
// int main(){
//     string num="1234";
//     int n=num.length();
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum += num[i] - '0';
//     }
//     cout<<"Sum of number: "<<sum;
// }

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int a=0,b=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        int next =a+b;
        a=b;
        b=next;
    }
    return 0;

}