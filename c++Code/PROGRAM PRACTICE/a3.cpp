#include<iostream>
using namespace std;
int printre(int arr[],int size,int i){
    if(i<size){
        i=i+arr[i];
    }
    int ans=printre(arr,size-1,i);
    return ans;
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int i=0;
    cout<<printre(arr,size,i);
}
