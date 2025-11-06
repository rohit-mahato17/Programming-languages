#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int lo = 1;
      // int value = i;
        for(int value=i;lo<=n; lo++) {
            cout <<value;
           value++;
           // lo++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}