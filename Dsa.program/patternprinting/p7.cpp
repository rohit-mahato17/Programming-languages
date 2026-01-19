// #include<iostream>
// using namespace std;

// int main(){
//     int n=5;
//     char ch= 'A';

//     for(int i=0; i<n; i++){
//         for(int j=0;j<i+1; j++){
//             cout<<ch;
//         }
//         ch = ch+1;
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n=5;

//     for(int i=0; i<n; i++){
//         for(int j=1;j<i+1; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

//Reverse Triangle Pattern

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int val=1;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout<<val;
//             val = val + 1;
//         }
//         cout<<endl;
//     }
// }

//Reverse Triangle Pattern character

#include<iostream>
using namespace std;
int main(){
    int n=4;
    char ch='A';

    for(int i=0; i<n; i++){  
        for(int j=0; j<i; j++){
            cout<<" ";
        }

        for(int j=0; j<n-i; j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for (int i = 0; i < n; i++) {
//         cout << string(i, ' ');        // print spaces
//         cout << string(n - i, '0' + i + 1); // print numbers
//         cout << '\n';
//     }

//     return 0;
// }
