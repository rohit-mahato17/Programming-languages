//find the largest element of a given array of integers
#include<iostream>
using namespace std;
int main(){
       int arr[]={5,4,9,12,8};
       int n=5;
    int max=arr[0];
       for(int i=1;i<=n;i++){
           if(arr[i]>max){
            max =arr[i];
           }

       }
       cout<<max;
}

