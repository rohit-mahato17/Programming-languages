#include<iostream>
using namespace std;
int main(){
    int arr[]={12,3,4,15};
    int n=sizeof(arr)/sizeof(arr[0]);

     int sum=0;
    for(int i: arr){
        sum +=arr[i];
    }
    cout<<"sum of array: "<<sum;

    return 0;
}