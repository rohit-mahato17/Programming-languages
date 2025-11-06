//wright a program to search an element in an array
#include<iostream>
#include<vector>
using namespace std;
int searching(vector<int> arr,int target){
    int n=arr.size();
    
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            return 1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={10,11,7,8,2,9};
    int target=7;
    int i=searching(arr,target);
    if(i == -1){
        cout<<"not found value";
    }else{
        cout<<"found value";
    }
}