#include <iostream>
using namespace std;

void sortzeroone(int arr[], int size) {
    int zerocount = 0;

    // Count the number of 0s
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0)
            zerocount++;
    }

    // Fill the array with 0s up to zerocount
    for (int i = 0; i < zerocount; i++) {
        arr[i] = 0;
    }

    // Fill the rest of the array with 1s
    for (int j = zerocount; j < size; j++) {
        arr[j] = 1;
    }
}

int main() {
    int arr[] = {0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0};
    int size = 14;

    sortzeroone(arr, size);

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
