#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> arr={2,4,6,8,9};
    //  arr.insert(arr.begin(), 30); //insertion front
    //arr.erase(arr.begin());   //delation front
    // arr.pop_back();
    arr.push_back(10);   //insertion back
    arr.pop_back();     //delation back
     int n=arr.size();
    
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     return 0;
}
 