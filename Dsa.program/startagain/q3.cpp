#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 12321;
    int ans = 0;
    int temp = n;

    while (temp != 0) {
        int digit = temp % 10;    // extract last digit
        ans = ans * 10 + digit;   // build reversed number
        temp = temp / 10;         // remove last digit
    }

    cout << "Reversed: " << ans << endl;

    if (n == ans)
        cout << "Palindrome Number ✅" << endl;
    else
        cout << "Not a Palindrome ❌" << endl;
}
