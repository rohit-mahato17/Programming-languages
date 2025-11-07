//print sum of the array using resursen
#include<iostream>
#include<vector>
using namespace std;
int sumofarray(vector<int> arr,int n){
    if(n==1){
        return 1;
    }

    int sum =(sumofarray(arr,n-1)+ arr[n-1]);
     return sum;
}
int main(){
    vector<int> arr={1,3,5,7,9};
    int n=arr.size();
    cout<<sumofarray(arr,n);
}
