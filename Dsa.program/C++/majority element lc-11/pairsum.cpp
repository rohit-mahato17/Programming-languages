// pair sum
#include<iostream>
#include<vector>
using namespace std;

bool pairsums(vector<int> arr, int n,int target){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j]== target){
                 return true;
            }
        }
    }
    return false;
}

int main(){
    int target=9;
    vector<int> arr={2,7,11,15};
    int n=arr.size();

if(pairsums(arr,n,target)){
    cout<<"found the value of target:";
}else{
    cout<<"not found the value    ";
}
return 0;
}