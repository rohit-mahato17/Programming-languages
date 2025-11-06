#include<iostream>
using namespace std;
int printbubbleshort(int arr[],int size){
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
    int arr[]={15,16,6,8,9,10};
    int size=6;
    printbubbleshort(arr,size);

}

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,30,50,36,76,1};
//     int size=6;
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int j=0;j<size;j++){
//         cout<<arr[j]<<" ";
//     }
//     return 0;
// }