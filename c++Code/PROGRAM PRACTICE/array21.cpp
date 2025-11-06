// #include<iostream>
// using namespace std;
// int printarray(int arr[3][4],int row,int col){
//     for(int i=0;i<col;i++){
//         int sum=0;
//         for(int j=0;j<row;j++){
//             sum=sum+arr[j][i];
//         }
//         cout<<"print the sum of col :"<<sum<<endl;
//     }
// }
// int main(){
//     int arr[3][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//     int row=3;
//     int col=4;
//     printarray(arr,row,col);
// }

// #include <iostream>
// using namespace std;

// void printarray(int arr[4][4], int row, int col) {
//    int sum=0;
//    for(int i=0;i<row;i++){
//     sum=sum+arr[i][i];
//    }
//     cout<<"The value is row digonal :"<<sum;
// }

// int main() {
//     int arr[4][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}
//     };
//     int row = 4;
//     int col = 4;
//     printarray(arr, row, col);
//     return 0;
//}

// #include<iostream>
// using namespace std;
// int array(int arr[][4],int row){
//     int bom=3;
//     for(int i=0;i<row;i++){
//         cout<<arr[bom][i]<<",";
//         bom--;
//     }
// }
// int main(){
//     int arr[4][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//         {13,14,15,16}
//     };
//     int row=4;
//     array(arr,row);
// }

// #include<iostream>
// using namespace std;
// int array(int arr[][4],int row,int colum){
//     int j;
//     cin>>j;
//     for(int i=0;i<row;i++){
//         cout<<arr[j][i]<<",";
//     } 
// }
// int main(){
//    int arr[4][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//         {13,14,15,16}
//     };
//     int row=4;
//     int colum=4;
//     array(arr,row,colum);
// }
 