//finding target value
#include<bits/stdc++.h>
using namespace std;
bool findminimum(vector<int> &arr){
    int target=7;
 
    int s=0;
    int end=arr.size()-1;
    // int finder=(s+end)/2;

    while(s <= end){
        int finder=(s+end)/2;
        if(arr[finder] == target){
            return true;
        }else if(target > arr[finder]){
             s=finder+1;
        }else{
            end=finder-1;
        }
        
    }
   return false;
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int lkg=findminimum(arr);
    if(lkg == true){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
