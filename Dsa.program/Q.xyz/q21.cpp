//Write a program to find the smallest ans largest element in an array
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={101,21,3,44,55,644,7};
//     int n=arr.size();
//      int mins=arr[0];
//      int maxs=arr[0];
//     for(int i=0;i<n;i++){
//          if(arr[i]>maxs){
//             maxs = arr[i];
//          }
//          else if(arr[i]<mins){
//             mins = arr[i];
//          }
//     }
//     cout<<mins<<endl;
//     cout<<maxs<<endl;

//     return 0;
// }

// Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers
#include <iostream>
using namespace std;

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // remainder
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD = " << gcd(num1, num2) << endl;
    return 0;
}
