#include<iostream>
using namespace std;
int array(int arr[],int n,int index){
       if(index>=n){
        return 0;
       }
       cout<<arr[index]+10<<" ";
     array(arr,n,index+1);
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    int index=0;
    array(arr,n,index);
}