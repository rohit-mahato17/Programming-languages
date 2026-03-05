// Find duplicates in O(n) time and O(n) extra space
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
      vector<int> arr = {1, 6, 5, 2, 3, 3, 2};
      int n=arr.size();

    //    int store=0;
      for(int i=0;i<n;i++){
           
           for(int j=i+1;j<n;j++){
                if(arr[j] ==  arr[i]){
                    cout<<arr[i]<<endl;
                }
           }
      }

      return 0;
}
