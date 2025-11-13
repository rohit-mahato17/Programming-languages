#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={2,5,1,6,7,9,10,3};
    int a=0,b=0;
    int maxr=arr[0];
    for(int i=0;i<arr.size();i++){
      if(arr[i] > maxr){
         maxr=arr[i];
        b=a;
        a=maxr;
      }
    }
    // cout<<maxr<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
}