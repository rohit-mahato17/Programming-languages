//write a program to find compound intrest 
#include <iostream>
#include<math.h>
using namespace std;

// Driver code
int main()
{
    double principal = 25000, rate = 5.4, time = 2;

    // Calculate compound interest
    double A = principal * ((pow((1 + rate / 100), time)));
    double CI = A - principal;

    cout << "Compound interest is " << CI;

    return 0;
}
// This Code is Contributed by Sahil Rai.