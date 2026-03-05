#include<bits/stdc++.h>
using namespace std;
int finderchota(vector<int> &arr){
    int n=arr.size();
    int res=arr[0];

    for(int i=0;i<n;i++){

        res=min(res,arr[i]);
    }
    return res;
}

int main(){
    vector<int> arr={5,6,1,2,3,4};
    cout<<finderchota(arr);
}
