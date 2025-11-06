#include<iostream>
using namespace std;

int binsearch(int arr[], int s, int e, int target) {
    if (s > e) {
        return -1; // Base case: target not found
    }

    int mid = s + (e - s) / 2; // Prevent overflow in large arrays
    if (arr[mid] == target) {
        return mid; // Target found
    }

    if (arr[mid] < target) {
        return binsearch(arr, mid + 1, e, target); // Search in the right half
    } else {
        return binsearch(arr, s, mid - 1, target); // Search in the left half
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    int start = 0;
    int end = size - 1;

    int target = 80;
    int foundindex = binsearch(arr, start, end, target); // Corrected call

    if (foundindex != -1) {
        cout << "Target found at index: " << foundindex << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
