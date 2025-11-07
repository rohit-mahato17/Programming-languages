// #include<iostream>
// using namespace std;

// int main(){
//      string str="12921";
//      int start=0;
//      int end=str.size()-1;

//      bool ispalindrome=true;

//      while(start < end){
//       if(str[start] != str[end]){
//           ispalindrome=false;
//           break;
//       }
//       start++;
//       end--;
//      }
//      if(ispalindrome){
//       cout<<"Palindrome number"<<endl;
//      }else{
//       cout<<"Not palindrome"<<endl;
//      }
//      return 0;
// }
// prime number
// #include <iostream>
// using namespace std;
// int main()
// {
//   int arr[] = {3, 7, 1, 9, 5};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   int max = arr[0];
//   int min = arr[0];

//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] > max)
//     {
//       max = arr[i];
//     }
//     else if (arr[i] < min)
//     {
//       min = arr[i];
//     }
//   }

//   cout << "value of max:" << max << endl;
//   cout << "value of min:" << min << endl;
// }
   
//  Write a Program to Check Whether a Number is an Armstrong Number or No
// #include<iostream>
// using namespace std;
// int main(){
//     int n=153;
//     int temp=n;
//     int ans=0;

//     while(n>0){
//         int rem=n % 10;
//         ans=(ans) + (rem * rem * rem);
//         n = n/10;
//     }

//     if(temp == ans){
//         cout<<"Yes, it is Armstong Number";
//     }else{
//         cout<<"No,it is not an Armstong Number";
//     }

//     return 0;
// }

//write a program to calculate the lowest common multiple;
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//         int n;
//         cout<<"Enter the value of n:";
//         cin>>n;

//         int a=0,b=1,c;

//         if(n==1){
//             cout<<"Nth term:"<<a;
//         }else if(n==2){
//             cout<<"Nth term:"<<b;
//         }else{
//             for(int i=3;i<=n;i++){
//                 c=a+b;
//                 a=b;
//                 b=c;
//                 cout<<b<<" ";
//             }
//             // cout<<"Nth term: "<<b;
//         }

//         return 0;
// }

//recursive solution
// #include <iostream>
// using namespace std;

// int fibonacci(int n) {
//     if (n == 1) return 0;
//     if (n == 2) return 1;
//     return fibonacci(n-1) + fibonacci(n-2);
// }

// int main() {
//     int n=9;
//     // cout << "Enter n: ";
//     // cin >> n=9;

//     cout << "Nth term: " << fibonacci(n);

//     return 0;
// }
// Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers
#include <iostream>
using namespace std;

// Function to calculate GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM using the formula: (a * b) / GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
  
int main() {
    int num1=4, num2=6;

    cout << "LCM = " << lcm(num1, num2);
    return 0;
}
