//pass by reference
#include<iostream>
using namespace std;
int changes(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*2;
    }
    
}
int main(){
    int arr[]={1,2,3};
   
    changes(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
}