//Bubble short

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr={9,3,45,6,7,89,1};
//     int n=arr.size();

//     for(int i=1; i<n; i++){

//         bool swapped=false;
//         for(int j=0; j<n-i; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//             }
//         }
    
    
//     if(swapped == true){
//         cout<<"papaya"<<endl;
//     }else{
//         cout<<"ai bagaiyan"<<endl;
//     }
// }
//     return 0;
// }

//Selection sort

// #include<bits/stdc++.h>
// using namespace std;
// void Selectionsort(int arr[],int n){

//     for(int i=0; i < n-1 ; i++){
//       int minIndex=i;
//       for(int j=i+1 ; j<n ; j++){
//         if(arr[j]<arr[minIndex]){
//             minIndex=j;
//         }
//       }
//       swap(arr[i],arr[minIndex]);
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={9,3,45,6,7,89,1};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     Selectionsort(arr,n);
// }

