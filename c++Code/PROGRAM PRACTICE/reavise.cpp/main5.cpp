//linear search
#include<iostream>
using namespace std;
 
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    int s=0;
    int e=size-1;

    while(s>=size){
        for(int i=0;i<size;i++){
        swap(arr[i],arr[e]);
        s++;
        e--;
        }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
} 