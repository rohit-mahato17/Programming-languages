//2D array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };

//     int brr[][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };

//         int crr[3][ ]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//  }

// #include<iostream>
// using namespace std;
// void printarray(int arr[][4],int row,int column){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cout<<arr[i][j]<<" ";
//         }
//      cout<<endl;
//     } 
// }
// int main(){
//     int arr[3][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//     int row=3;
//     int column=4;
//     printarray(arr,row,column);
// }

#include<iostream>
using namespace std;
int print(int arr[3][4],int row,int colam){
    for(int i=0;i<row;i++){
        for(int j=0;j<colam;j++){
            cout<<arr[i][j]<<",";
        }
        cout<<endl;
    }
}
int main(){
     int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
     };
     int row=3;
     int colam=4;
     print(arr,row,colam);
}
