//bubble sort
// #include<iostream>
// using namespace std;
// int printbubbleshort(int arr[],int size){
//     for(int i=0 ; i < size-1 ; i++){
//         for(int j=0 ; j<size-1 ; j++){
//             if(arr[j] > arr[j+1]){
//                swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={15,16,6,8,5};
//     int size=5;
//     printbubbleshort(arr,size);
// }
//op=5 6 8 15 16 

//Insertion sort
// #include<iostream>
// using namespace std;
// int printinsertion(int arr[],int size){
//    for(int i=0 ; i<size ; i++){
//        for(int j=0 ; j<size ; j++){
//           if(arr[i]>arr[j]){
//             swap(arr[j],arr[j+1]);
//           }
//        }
//    }
//    for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//    }
// }
// int main(){
//     int arr[]={3,4,5,6,7,0,1,2};
//     int size=8;
//     printinsertion(arr,size);
// }

#include<iostream>
using namespace std;
int printarray(int arr[],int size){
  for(int i=0;i<size-1;i++){
    for(int j=0;j<size-1;j++){
      if(arr[j]>arr[j+1]){
      swap(arr[j],arr[j+1]);
      }
    }
  
  }
  for(int j=0;j<size;j++){
    cout<<arr[j]<<" ";
  }
}
int main(){
  int arr[]={5,2,7,9,4,0,8,1,10};
  int size=9;
  printarray(arr,size);
}
