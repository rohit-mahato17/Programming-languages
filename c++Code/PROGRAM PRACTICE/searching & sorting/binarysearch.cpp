//binary search;
#include<iostream>
using namespace std;
int binarysearch(int arr[],int n){
    int s=0;
    int end=n-1;
    int mid=(s+end)/2;
    int t=99;
    while(s<=end){
        if(arr[mid]==t){
            return true;
        }
        else if(t>arr[mid]){
             s=mid+1;
        }else{
            end=mid-1;
        }
         mid=(s+end)/2;
    } 
    return false;
 }
int main(){
    int arr[]={24,67,81,99,78};
    int size=sizeof(arr)/sizeof(int);
    int ans=binarysearch(arr,size);
    if(ans==true){
        cout<<"found value";
    }else{
        cout<<"not found";
    }
    return 0;
}
