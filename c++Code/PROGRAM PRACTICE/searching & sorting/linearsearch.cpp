//Linear search
#include<iostream>
using namespace std;
int funtion(int arr[],int n,int target){
    
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
     int arr[]={10,20,30,40,50,60,80};
    int n=sizeof(arr)/sizeof(int);
    int target=60;
    int tan=funtion(arr,n,target);
    if(tan==true){
        cout<<"found the value";
    }else{
        cout<<"not found the value";
    }
    return 0;
}

