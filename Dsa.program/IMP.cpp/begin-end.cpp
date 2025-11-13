#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};

    sort(arr.begin(), arr.end()); // ascending sort

    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
//o/p-> 1 2 5 5 6 9 
//"arr ke first se leke last tak ke elements ko ascending order me arrange karo."

//"arr ke first se leke last tak ke elements ko desending order me arrange karo."
//sort(arr.begin(), arr.end(), greater<int>());
//op-> 9 6 5 5 2 1