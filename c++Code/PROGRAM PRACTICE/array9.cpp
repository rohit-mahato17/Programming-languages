// swap the number each other
//  #include<iostream>
//  using namespace std;

//  void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void swapalternate(int arr[],int size){
//     for(int i=0;i<size;i=i+2){
//         if(i+1<size){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }       
//  int main(){

//     int even[8]={5,2,6,8,9,4,1,0};
//     int odd[5]={11,33,9,76,43};

//     swapalternate(even,8);
//     printarray(even,8);

//     cout<<endl;

//     swapalternate(odd,5);
//     printarray(odd,5);

//     return 0;
//  }
#include<iostream>
using namespace std;
int print(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i<size){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    print(arr,8);
}

