#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int target) {
    if (start > end) {
        return false;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
        return true;
    } else if (target < arr[mid]) {
        return binarySearch(arr, start, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, end, target);
    }
}

int main() {
    int arr[] = {10, 20, 40, 50, 60, 80, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 90;

    if (binarySearch(arr, 0, size - 1, target)) {
        cout << "Found the value";
    } else {
        cout << "Not found the value";
    }

    return 0;
}
