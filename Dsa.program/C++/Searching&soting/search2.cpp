//Binary searching
#include<iostream>
using namespace std;
void binarysearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end){
       if(arr[mid]==target){
           cout<<"found the value";
       }else if(target>arr[mid]){
           start=mid+1;
       }else{
          end=mid-1;
       }
        mid=(start+end)/2;
    }
}

int main(){
    int arr[]={92,93,94,95,96,98,99};
    int size=sizeof(arr)/sizeof(int);
    int target;
    cout<<"Enter you value of target:";
    cin>>target;

    binarysearch(arr,size,target);

}

