#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int tar){
     int s=0;
     int e=n-1;
     int mid=(s+e)/2;
     int ans=-1;
     while(s<=e){
        if(arr[mid]==tar){
           ans=mid;
           e=mid-1;
        }
        else if(tar>arr[mid]){
          s=mid+1;
        }else if(tar<arr[mid]){
            e=mid-1;
        }
        mid=(s+e)/2;
     }
     return ans;
}
int main(){
int arr[]={10,30,30,40,70,80};
int n=sizeof(arr)/sizeof(int);
int target=60;

int olla=linearsearch(arr,n,target);
if(olla==-1){
    cout<<"not found";
}else{
    cout<<"found:"<<olla;
}

}