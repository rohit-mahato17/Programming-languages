// key pair
#include <iostream>
using namespace std;
int funtion(int arr[],int max){
    int l=0;
    int r=max-1;
    int x=16;
    int sum=0;
    while(l<=r){
        sum=arr[l]+arr[r];
        if(sum == x){
            return true;
        } 
        else if(sum > x){
            r--;
        }else(sum < x);{
            l++;
        }

  }
  return -1;
}

int main(){
    
   int arr[]={1,4,45,6,10,8};
   int max=sizeof(arr)/sizeof(int);
 
  int bom=funtion(arr,max);
   if(bom == -1){
       cout<<"no";
   }else{
       cout<<"yes";
   }
   
}
