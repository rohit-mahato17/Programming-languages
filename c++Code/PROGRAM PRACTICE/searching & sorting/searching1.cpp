//missing value 
#include <iostream>
#include <vector>
using namespace std;
int findMissingNumber(const vector<int>& numbers) {
    int expectedSum = 0, actualSum = 0;
    int n = numbers.size() + 1; // Total count including the missing number

    // Single loop to calculate both expected sum and actual sum
    for (int i = 0; i < numbers.size(); ++i) {
        expectedSum += (i + 1);  // Expected sum up to the current index
        actualSum += numbers[i]; // Actual sum of the vector elements
    }
    expectedSum += n; // Add the missing number's expected value

    return expectedSum - actualSum; // Missing number
}

int main() {
     vector<int> sequence = {1, 2, 4, 5, 6}; // Example vector
    int missingNumber = findMissingNumber(sequence);
    cout << "The missing number is: " << missingNumber <<endl;
    return 0;
}

