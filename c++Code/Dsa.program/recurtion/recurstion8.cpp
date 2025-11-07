// Mean of array using recursion
#include<iostream>
#include<vector>
using namespace std;
int printmean(vector<int> arr,int n){
   
    if(n==1 ){
        return 1;
    }
    if(n==0){
        return 0;
    }
    //   int sum=0;
     int sum= n+printmean(arr,n-1);
     return sum;
}
int main(){
  vector<int> arr={1,2,3,4,5};
   int n=arr.size();
  cout<<printmean(arr,n)/n<<endl;

  return 0;
}
