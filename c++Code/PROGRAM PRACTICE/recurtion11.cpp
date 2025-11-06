//array print..
// #include<iostream>
// using namespace std;
// int array(int arr[],int n){
//        if(n==0){
//         cout<<arr[n]<<" ";
//         return 0;
//        }
//        cout<<arr[n]<<" ";
//       int max=array(arr,n-1); 
//     //   cout<<arr[n]<<" ";
// }
// int main(){
//     int arr[]={10,20,30,40,50};
//     int n=5-1;
//     array(arr,n);
// }

#include<iostream>
using namespace std;
int array(int arr[],int n,int index){
       if(index>=n){
        return 0;
       }
       cout<<arr[index]<<" ";
     array(arr,n,index+1);
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    int index=0;
    array(arr,n,index);
}
