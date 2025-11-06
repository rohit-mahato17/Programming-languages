// #include <iostream>
// using namespace std;

// // Transpose function
// void transpose(int arr[][4], int row) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < i; j++) {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
// }

// // Function to print the matrix
// void printMatrix(int arr[][4], int row) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < row; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int arr[4][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}
//     };

//     int row = 4;

//     cout << "Original Matrix:" << endl;
//     printMatrix(arr, row);

//     cout << "Performing transpose..." << endl;
//     transpose(arr, row);

//     cout << "Transposed Matrix:" << endl;
//     printMatrix(arr, row);
    
//     return 0;
// }
// output=
// 1 5 9 13
// 2 6 10 14
// 3 7 11 15
// 4 8 12 16

// #include <iostream>
// using namespace std;

// // Transpose function
// void transpose(int arr[][4], int row) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < i; j++) {
//             swap(arr[j][i], arr[i][j]);
//         }
//     }
// }

// // Function to print the matrix
// void printMatrix(int arr[][4], int row) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < row; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int arr[4][4] = {
//         {1,5,9,13},
//         {2,6,10,14},
//         {3,7,11,15},
//         {4,8,12,16}
//     };

//     int row = 4;

//     cout << "Original Matrix:" << endl;
//     printMatrix(arr, row);

//     cout << "Performing transpose..." << endl;
//     transpose(arr, row);

//     cout << "Transposed Matrix:" << endl;
//     printMatrix(arr, row );
    
//     return 0;
// }

//output:   1 2 3 4
        //  5 6 7 8
        //  9 10 11 12
        //  13 14 15 16


#include<iostream>
using namespace std;
int main(){
    int arr[50]={10,20,30,40,50};//size will be give 50 he run 50 times
    int size=10;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}  