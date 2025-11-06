//target is found or note
#include<iostream>
using namespace std;
int up(int arr[],int s,int e,int target){
    if(s>e){
        return -1;
    }
    //processing
    int mid = s + (e-s)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<target){
        s=mid+1;
        int ans=up(arr,s,e,target);
        return ans;
    }else{
        e=mid-1;
        int ans=up(arr,s,e,target);
        return ans;
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int s=0;
    int e=size-1;
    int target=40;
    int found = up(arr,s,e,target);
   if(found == -1){
    cout<<"target  not found"<<endl;
   }else{
    cout<<"target found :"<<found<<endl;
   }
}
