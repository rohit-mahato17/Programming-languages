// #include<iostream>
// using namespace std;
// int searching(int arr[],int target,int n){
//     int s=0;
//     int e=n-1;
//     int mid=(s+e)/2;
//     int m=-1;

//     while(s<=e){
//         if(arr[mid]==target){ 
//           m=mid;
//           e=mid-1;
//         }
//         else if(target>arr[mid]){
//             s=mid+1;
//         }
//         else if(target<arr[mid]){
//             e=mid-1;
//         }
//         mid=(s+e)/2;
//     }
//     return m;
// }
// int main(){
//     int arr[]={10,30,20,30,30,50,30,60,70,80,90};
//     int target=30;
//     int n=11;
//     int to=searching(arr,target,n);
//     if(to==-1){
//         cout<<"condition is not mached";
//     }else{
//         cout<<"condition is mached="<<to;
//     }
// }

#include<iostream>
using namespace std;
int bom(int arr[],int size,int target){
    int max=-1;
    for(int i=1;i<=size;i++){
        if(arr[i]==target){
            max=i;
        }
    }
    return max;
}
int main(){
   int arr[]={30,30,30,30,30,30,30,70,30,80,90};
   int size=11;
   int target=30;
   int xxz=bom(arr,size,target);
   if(xxz==-1){
     cout<<"mc";
   }else{
    cout<<"good"<<xxz;
   }
}
