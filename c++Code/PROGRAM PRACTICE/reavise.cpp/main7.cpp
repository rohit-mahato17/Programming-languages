#include <iostream>
using namespace std;

int main() {
    int n;
      cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique elements in the array are: ";
    for (int i = 0; i < n; i++) {
        bool isUnique = true;

        // Check if arr[i] appears more than once
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
