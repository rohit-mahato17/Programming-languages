#include<iostream>
#include<vector>
using namespace std;
int funtion(vector<int> arr,int n){
    int s=0;
    int e=n-1;
    int let=(s+e)/2;
    int target=11;
    
     for(int i=0;i<n;i++){
          if(target == arr[i]){
            return true;
          }else if(target>arr[i]){
              s=let+1;
          }else{
            e=let-1;
          }
         int let=(s+e)/2;
    }
    return false;
}
int main(){

  vector<int> arr={4,9,2,11,7,3};
    int n=arr.size();
   if(funtion(arr,n)==true){
      cout<<"found the value:";
   }else{
      cout<<"not found";
   }

}