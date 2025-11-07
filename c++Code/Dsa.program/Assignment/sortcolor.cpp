#include<bits/stdc++.h>
using namespace std;
void sortcolors(vector<int> nums){
    
   sort(nums.begin(),nums.end());

   for(int i=0;i<nums.size(); i++){
      cout<<nums[i]<<" ";
   }
}
int main(){
    vector<int> nums={2,0,2,1,1,0};

    sortcolors(nums);

    return 0;
}
