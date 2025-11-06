//check chota sa badha
#include<iostream>
using namespace std;
bool checksorted(int arr[],int size,int index){
        if(index>=size){
          return true;
        }
        
        if(arr[index]>arr[index-1]){
            bool aagekanas = checksorted(arr,size,index+1);
            return aagekanas;
        }else{
            return false;
        }
}
int main(){
     int arr[]={10,20,30,50,60,70};
     int size=6;
     int index=1;

     bool issorted=checksorted(arr,size,index); 
     if(issorted){
        cout<<"array is sorted"<<endl;
     }else{
        cout<<"array is not sorted"<<endl;
     }
     return 0;
}