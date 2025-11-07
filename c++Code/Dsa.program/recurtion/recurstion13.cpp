//length of the string using recurstion
// #include <bits/stdc++.h>
// using namespace std;
// int arrSum(vector<int> &arr,int n,int sum=0){
//     if(n==0){
//         return sum;
//     }
//     return arrSum(arr,n-1,sum + arr[n-1]);
// }

// int main(){
//     vector<int> arr={2,55,1,7};
//     int n=arr.size();
//     cout<<arrSum(arr,n,0);
// }

 
//sum of array using tail recurtion
// #include<bits/stdc++.h>
// using namespace std;
// int sumofarray(vector<int> &arr,int n,int sum){
//      if(n==0){
//         return sum;
//      }

//      return sumofarray(arr,n-1,sum+arr[n-1]);

//   }
 
// int main(){
//   vector<int> arr={10,55,69,90};
//   int n=arr.size();
//   cout<<sumofarray(arr,n,0)<<endl;
// }

//find first n fibonacci numbers
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> fibnochinth(int n){
//       vector<int> ans;
//       int f1=0,f2=1,i;
//       ans.push_back(f1);

//       for(i=1;i<n;i++){
//         ans.push_back(f2);
//         int next=f1+f2;
//         f1=f2;
//         f2=next;
//       }
//       return ans;
// }
// int main(){
//     int n=7;
//     vector<int> res=fibnochinth(n);
//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }

//     return 0;
// }

//find factorial
#include<iostream>
using namespace std;

int fibnochi(int n){
   if(n==1){
    return 1;
   }

  int zxy= n*fibnochi(n-1);
  return zxy;

}
int main(){
    int n=5;
    cout<<fibnochi(n);
}