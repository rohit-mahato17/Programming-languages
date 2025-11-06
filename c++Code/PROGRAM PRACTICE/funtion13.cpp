#include<iostream>
using namespace std;

// Function declarations
int sum(int a, int b);
float sum(float a, float b, float c);
double sum(double a, double b);


int main() {
    cout << sum(4, 3) << endl;
    cout << sum(4, 5) << endl;
    cout << sum(4.4f, 3.3f, 2.2f) << endl;  // Use 'f' suffix for float literals
    cout << sum(4, 6)<<endl;
    return 0;
}

// Function definitions
int sum(int a, int b) {
    return a + b;
}

float sum(float a, float b, float c) {
    return a + b + c;
}

double sum(double a, double b){
  return a+b;
}
