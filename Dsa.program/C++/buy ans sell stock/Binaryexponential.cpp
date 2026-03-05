#include <bits/stdc++.h>
using namespace std;

const long long M = 1e9+7;  // MOD define

long long binExprecur(long long a, long long b) {
    if (b == 0) return 1;

    long long res = binExprecur(a, b / 2);

    if (b & 1) {
        return (a % M * ((res * res) % M)) % M;
    } else {
        return (res * res) % M;
    }
}

int main() {
    long long a = 2, b = 13;
    cout << binExprecur(a, b);
}
