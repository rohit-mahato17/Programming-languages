#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,14,2,16,10,20};
    int n=arr.size();

    sort(arr.begin(),arr.end());

    cout<<arr[n-1];

    return 0;
}