//sorted array
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,90,80,50};
    int num=sizeof(arr)/sizeof(int);
    
//     for(int i=0;i<num;i++){
//         for(int j=0;j<num;j++){
//             if(arr[i]<arr[j]){
//                   swap(arr[i],arr[j]);
//             }else{
//                 continue;
//             }
//         }
//     }
//     for(int i=0;i<num;i++){
//         cout<<arr[i]<<" ";
//     }
       int max=arr[0];
       for(int i=0;i<num;i++){
          if(arr[i]>max){
            max=arr[i];
          }
       }
    cout<<max;
}




