//print Reverse an array?
#include<iostream>
using namespace std;
void reversearray(int arr[],int size){
       int left=0;
       int right=size-1;
       while(left<right){
        swap(arr[left],arr[right]);
            left++;
            right--;
        }
    // for(int left=0,right=size-1;left<=right;left++,right--){
    //     swap(arr[left],arr[right]);
    // }
        //print the array
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={10,20,30,40,50,60};
    int size=6;
    reversearray(arr,size);
}
// //output:60 50 40 30 20 10

//print extream array?
// #include<iostream>
// using namespace std;
// void reversearray(int arr[],int size){
//        int left=0;
//        int right=size-1;
//        while(left<right){
//         cout<<arr[left]<<" ";
//         cout<<arr[right]<<" ";
//             left++;
//             right--;
//         }
// }
// int main(){
//     int arr[6]={10,20,30,40,50,60};
//     int size=6;
//     reversearray(arr,size);
// }
// //output:10 60 20 50 30 40
