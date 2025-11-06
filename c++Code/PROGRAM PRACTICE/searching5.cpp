
#include<iostream>
using namespace std;

int printsearching(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end){
          if(arr[mid]==target){
            return mid;
          }
           else if(target>arr[mid]){
            start=mid+1;
          }
          else {
            end=mid-1;
          }
          mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int size=9;
    int target=30;

    int ansprinting=printsearching(arr,size,target);

    if(ansprinting == -1){
        cout<<"result are not found";
    }else{
        cout<<"result are foung :"<<ansprinting;
    }
    return 0;
}
