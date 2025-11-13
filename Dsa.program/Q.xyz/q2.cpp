#include<iostream>
using namespace std;
int main(){
    int arr[]={13,15,3,19,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int target=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] > target){
             target = arr[i];
        }
    }

    cout<<"max value of array: "<<target;

    return 0;
}