//peak element in mountain array
#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(const vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Check if mid is in the increasing part of the mountain
        if (arr[mid] < arr[mid + 1]) {
            left = mid + 1;
        } else {
            // Mid is in the decreasing part of the mountain
            right = mid;
        }
    }
    // Left and right converge at the peak
    return left;
} 

int main() {
    vector<int> mountainArray = {1, 3, 8, 12, 4, 2};

    int peakIndex = findPeakElement(mountainArray);
    cout << "Peak element is at index: " << peakIndex << endl;
    cout << "Peak element value: " << mountainArray[peakIndex] << endl;

    return 0;
}
