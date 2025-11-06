#include <iostream>
#include <climits> // Include this header for INT_MAX
using namespace std;

void findmin(int arr[], int size, int index, int &mini) {
    if (index >= size) {
        return;
    }
    mini = min(mini, arr[index]);
    findmin(arr, size, index + 1, mini);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;

    int mini = INT_MAX; // Initialize to maximum integer value
    findmin(arr, size, index, mini);
    cout << "Minimum number in array: " << mini << endl;
    return 0;
}
