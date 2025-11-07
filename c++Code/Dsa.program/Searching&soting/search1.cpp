//find linear search
#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int target){
      for(int l=0;l<size;l++){
         if(arr[l]==target){
              return true;
         }
      }
      return false;
}
int main(){
    int arr[]={60,50,40,30,20,100};
    int size=sizeof(arr)/sizeof(int);
    int target;
    cout<<"Enter your value of target:";
    cin>>target;

    if(linearsearch(arr,size,target)==true){
        cout<<"found the value";
    }else{
        cout<<"not found the value";
    }
    return 0;
}
