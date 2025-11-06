#include<iostream>
using namespace std;
int funtioncall(int arr[],int si){
int sta=0;
int en=si-1;
    while(sta<en){
        swap(arr[sta],arr[en]);
        sta++;
        en--;
    }
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int si=7;
    funtioncall(arr,si);
    for(int i=0;i<si;i++){
        cout<<arr[i]<<" ";
    }
}