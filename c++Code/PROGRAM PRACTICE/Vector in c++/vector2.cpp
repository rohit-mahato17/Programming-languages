// #include <iostream>
// #include <vector>
// #include <climits>  // for INT_MIN and INT_MAX
// using namespace std;

// int main() {
//     vector<int> v = {4, 1, 9, -5, 12, 0};

//     int maxi = INT_MIN;  // Initialize with smallest possible int
//     int mini = INT_MAX;  // Initialize with largest possible int

//     for (int x : v) {
//         if (x > maxi) maxi = x;
//         if (x < mini) mini = x;
//     }

//     cout << "Maximum value: " << maxi << endl;
//     cout << "Minimum value: " << mini << endl;

//     return 0;
// }

//ascii value
#include<iostream>
using namespace std;
int main(){
    for(char i='A';i<='Z';i++){
        cout<<i<<"="<<(int)i<<endl;
    }
}
