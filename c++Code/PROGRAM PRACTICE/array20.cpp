// #include<iostream>
// using namespace std;
// int printarray(int ayy[3][4],int row,int col){
//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<col;j++){
//             sum=sum+ayy[i][j];
//         }
//         cout<<"print all the sum of row :"<<sum<<endl;
//     }
// }
// int main(){
//     int ayy[3][4]={
//         {10,20,5,7},
//         {2,4,6,8},
//         {10,15,15,10}
//     };
//     int row=3;
//     int col=4;
//     printarray(ayy,row,col);
// }
#include<iostream>
using namespace std;
void printarray(int arr[][4], int row,int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int row = 4;
    int col=4;
    printarray(arr,row,col);

}
