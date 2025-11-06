//pratice array program array12.cpp.

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,4,6,8,12};
//     cout<<arr[0]<<" ";
//     cout<<arr[1]<<" ";
//     cout<<arr[2]<<" ";
//     cout<<arr[3]<<" ";
//     cout<<arr[4]<<" ";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[100]={10,20,30,40,50,60,70,80,90,100};
//     int size=100;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int  printarraysize(int arr[],int size){

//     int left=0;
//     int right=size-1;
//     while(left<=right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
//  for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// int main(){
//     int arr[100]={10,20,30,40,50,60,70,80,90,100,110};
//     int size=11;
//    printarraysize(arr,size);
//    return 0;
// }

#include<iostream>
using namespace std;

int  printarraysize(int arr[],int size){

    int left=0;
    int right=size-1;
    while(left<right){
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
        left++;
        right--;
    }
 
}
int main(){
    int arr[100]={10,20,30,40,50,60,70,80,90,100};
    int size=10;
   printarraysize(arr,size);
   return 0;
}
