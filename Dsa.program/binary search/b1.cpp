#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> arr,int target){
     int s=0;
     int end=arr.size()-1;

     while(s <= end){
        int mid= (s+end)/2;

        if(arr[mid] == target){
            return true;
        }else if(target > arr[mid]){
             s = mid+1;
        }else{
            end = mid-1;
        }
     }
     return -1;
}

int main(){
    vector<int> arr={-1, 0, 3, 5, 9, 12};
    int target= 12;
    if(binarysearch(arr,target) == 1){
        cout<<"Found the value";
    }else{
        cout<<"not found the value";
    }
  
}
