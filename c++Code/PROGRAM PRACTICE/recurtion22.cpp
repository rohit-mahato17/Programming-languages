#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& nums, int start, int end) {
    // Base case: Stop when start exceeds the size of nums
    if (start >= nums.size()) {
        return;
    }
    
    // Print the current subarray
    for (int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // If `end` has not reached the end of the array, increment `end`
    if (end + 1 < nums.size()) {
        print(nums, start, end + 1);
    } else { 
        // Move to the next starting point
        print(nums, start + 1, start + 1);
    }
}

int main() {
    vector<int> nums{1, 2, 3, 4, 5};
    print(nums, 0, 0);
    return 0;
}
