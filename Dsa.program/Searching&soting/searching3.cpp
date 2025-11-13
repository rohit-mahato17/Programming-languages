//Find the missing value
#include<iostream>
#include<vector>
using namespace std;
int missingvalue(vector<int>& arr){
   int num=arr.size();
   
   for(int i=1;i<num;i++){
    bool found=false;
      for(int j=0;i<num-1;j++){
         if(arr[i]==j){
              found=true;
              break;
         }
      }
      if(!found){
        return i;
      }
   }
  return -1;
}
int main(){
    vector<int> arr={8,2,4,5,3,7,1};
    cout<<missingvalue(arr);

}