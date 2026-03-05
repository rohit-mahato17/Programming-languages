//Pivot index
#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
int s=0;
int end=n-1;
int mid=s+(end-s)/2;

while(s<end){
    if(arr[mid] >= arr[0]){
        s=mid+1;
    }
    else{
        end=mid;
    }
     mid=s+(end-s)/2;
    }
    
    return s;
}
int main(){
    int arr[5]={8,10,17,1,3};
    cout<<"Pivot is:"<<getpivot(arr,5)<<endl;

    return 0;
}

