#include<iostream>
using namespace std;
int array(int arr[],int size,int index,int target){
    if(index>=size){
       return false;
    }
    if(arr[index]=target){
        return arr[index];
    }
    array(arr,size,index+1,target);
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int target=50;
    cout<<array(arr,size,index,target);
}
