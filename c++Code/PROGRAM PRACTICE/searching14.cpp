#include<iostream>
using namespace std;
int print(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=(e+s)/2;

    while(s<=e){
        if(arr[mid]==target){
            return true;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid=(e+s)/2;
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int target=400;
    int up=print(arr,n,target);
    if(up==-1){
        cout<<"false";
    }else{
        cout<<"true";
    }
}
