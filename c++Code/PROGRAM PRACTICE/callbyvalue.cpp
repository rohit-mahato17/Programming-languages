#include<iostream>
using namespace std;

void increment(int a) {
    a = a+1;
    cout<<"inside value is"<<a<<endl;
    
}

int main() {
    int x = 10;
    increment(x);
    cout<<"outside value is"<<x<<endl;
    return 0;
}


