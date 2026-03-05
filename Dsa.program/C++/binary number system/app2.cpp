// Binary to Decimal
// #include<iostream>
// using namespace std;
// int main() {
//     int binarynum = 101011;
//     int ans = 0;
//     int pow = 1;

//     while (binarynum > 0) {
//         int rem = binarynum % 10;
//         ans += rem * pow;           
//         binarynum /= 10;           
//         pow *= 2;    
//         cout<<ans<<endl;

//     }
// }

#include<iostream>
using namespace std;

int main(){

    int decimal = 10101010;
    int ans = 0;
    int pow = 1;

    while (decimal > 0)
    {
        int rem = decimal % 10 ;
        ans = ans + (rem*pow);
        decimal /= 10;

        pow *= 2;

    }
    cout<<ans;
}