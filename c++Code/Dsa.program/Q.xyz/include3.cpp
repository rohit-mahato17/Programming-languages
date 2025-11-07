// #include<bits/stdc++.h>
// using namespace std;
// int gprofit(vector<int> &prices){
//     int n=prices.size();
//     int res=0;
//           for(int i=0;i<n;i++){
//              for(int j=i+1;j<n;j++){
//                 res = max(res,prices[i]-prices[j]);
//              }
//           }
//           return res;
// }
// int main(){
//     vector<int> prices={7,10,1,3,6,9,2};
    
//     cout<<"Profit is stock: "<<gprofit(prices)<<endl;
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={7, 10, 1, 3, 6, 9, 2};
    int n=arr.size();
    int prime=0;
    int les=arr[0];
    for(int i=0;i<n;i++){
        prime = max(prime,arr[i]);
        les=min(les,arr[i]);
    }
    cout<<prime-les;
    
  
}
