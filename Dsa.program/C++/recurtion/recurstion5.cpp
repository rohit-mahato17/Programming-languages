//write a program to check sorted array
#include<iostream>
using namespace std;
int funtion(int arr[],int size,int index){
    if(index >= size){
        return true;
    }
     if(arr[index]>arr[index-1]){
        bool sorted=funtion(arr,size,index+1);
        return sorted;
     }else{
        return false; 
     }
 
}

int main(){
    int arr[]={10,20,40,50,60,80};
    int value=sizeof(arr)/sizeof(int);
    int index=1;
bool issorted=funtion(arr,value,index); 

      if(issorted){
        cout<< "Sorted" ;
      }
      else{
        cout<< "Array is not sorted" ;
      }

}
