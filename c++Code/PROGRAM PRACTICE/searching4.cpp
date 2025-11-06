#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int size, int target) {
    int start = 0, end = size - 1;
    int ans = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2; // Avoid overflow
        if (arr[mid] == target) {
            ans = mid; // Store the current index
            end = mid - 1; // Move left to find the first occurrence
        } else if (target > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int findLastOccurrence(int arr[], int size, int target) {
    int start = 0, end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2; // Avoid overflow
        if (arr[mid] == target) {
            ans = mid; // Store the current index
            start = mid + 1; // Move right to find the last occurrence
        } else if (target > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int countOccurrences(int arr[], int size, int target) {
    int firstOcc = findFirstOccurrence(arr, size, target);
    if (firstOcc == -1) {
        return 0; // Target not found
    }
    int lastOcc = findLastOccurrence(arr, size, target);
    return lastOcc - firstOcc + 1;
}

int main() {
    int arr[] = {30, 30, 30, 30, 30, 30, 40, 50, 60};
    int size = 9;
    int target = 30;

    int totalOccurrences = countOccurrences(arr, size, target);
    cout << "Total occurrences of " << target << " is: " << totalOccurrences << endl;

    return 0;
}
