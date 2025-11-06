//linear search
#include<iostream>
using namespace std;
 int bmw(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
         return arr[i];
        }
     }
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    int target=81;
    int max= bmw(arr,size,target);
     if(arr[max]==target){
          cout<<"yes";
     }else{
        cout<<"no";
     }
}

