#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 1};

    map<int, int> freq; 

    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    cout << "Element frequencies:\n";
    for (auto i : freq) {
        cout << i.first << " -> " << i.second << " times" << endl;
    }

    return 0;
}
