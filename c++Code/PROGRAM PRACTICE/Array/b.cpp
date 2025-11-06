// #include<iostream>
// using namespace std;

// int main() {
//     char arr[] = {'a', 'b', 'e', 'i', 'o'};
//     int n = 5;

//     for(int i = 0; i < n; i++) {
//         if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
//             cout << "vowel: " << arr[i] << endl;
//         } else {
//             cout << "not a vowel: " << arr[i] << endl;
//         }
//     }  

//     return 0;
// }

// C++ program to check if a
// Number is prime
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    // base condition
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    isPrime(21) ? cout << " true\n" : cout << " false\n";
    isPrime(17) ? cout << " true\n" : cout << " false\n";
    return 0;
}