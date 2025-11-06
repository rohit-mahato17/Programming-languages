#include<iostream>
using namespace std;
int searching(int arr[],int size,int target,int index){
    if(index>=size){
        return false;
    }
    if(arr[index]==target){
        cout<<arr[index]<<endl;
        return true;
    }
    bool ans=searching(arr,size,target,index+1);
        return ans;
    }

int main(){
    int arr[]={10,20,30,40,50,19};
    int size=6;
    int index=0;
    int target=40;
    cout<<searching(arr,6,target,index);
}
