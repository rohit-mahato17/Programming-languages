#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> arr={1,2,0,4,3,0,5,0};
  int n=arr.size();
 int count=0;
  for(int i=0;i<n;i++){
       if(arr[i] != 0){
          swap(arr[i],arr[count]);
          count++;
       }
       
  }      
  for(int num : arr){
    cout<<num<<" ";
  }
}