
//we are print prime no;
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int i=2;
//   int r=1;
//     if(i%n==0){
//         cout<<"not prime no";
//     }else{
//         cout<<"prime no";
//     }
//   return 0;
// }


// C++ program to print the prime number from
// 1 to n using trial division approach
#include <iostream>
using namespace std;

bool isPrime(int n) {
  
    // Since 1 is not prime return false
     if (n == 1 )
         return false;

    // Check divisiblity with all number in
      // range [2, n - 1]
    for (int i = 2; i < n; i++) {
      
        // If the n is divisible by i,
        if (n % i == 0)
            return false;
    }
  
      // If no divisor is found
      return true;
}

int main() {
    int n = 20 ;

    // Check every number from 1 to n
    for (int i = 1; i <= n; i++) {

        // Check if current number is prime
        if (isPrime(i))
            cout << i << " ";
    }
    return 0;
}
