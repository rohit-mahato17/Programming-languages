#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 4, 2, 9, 14, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // sort(arr, arr + n); // Ascending
       sort(arr, arr+n,greater<int>()); // Descending

    cout << "Ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
