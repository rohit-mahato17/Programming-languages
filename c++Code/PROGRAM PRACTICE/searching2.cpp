#include<iostream>
using namespace std;

int findstartoccurence(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end) {
        if (arr[mid] == target) {
            ans = mid; // Store the current index
            end = mid - 1; // Move to the right to find the last occurrence
        } else if (target > arr[mid]) {
            start = mid + 1; // Target is in the right half
        } else { // Fixed condition: target < arr[mid]
            end = mid - 1; // Target is in the left half
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main() {
    int arr[] = {10, 20, 30, 30, 30, 30, 40, 50, 60};
    int size = 9;
    int target = 30;
    int ansIndex = findstartoccurence(arr, size, target);
    if (ansIndex == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << ansIndex << endl;
    }
    return 0;
}
