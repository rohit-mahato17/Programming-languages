// Online C++ compiler to run C++ program online
// #include <iostream>
// #include <climits> 
#include<bits/stdc++.h>
using namespace std;
int findminimum(int arr[],int size){
    int minans=INT_MAX;
    
    for(int i=0;i<size;i++){
        if(arr[i]<minans){
            minans=arr[i];
        }
    }
    return minans;
}

int main() {
    int arr[]={10,8,31,4,3,1,51};
    int size=7;
    
    int minimum =findminimum(arr,size);
    cout<<minimum;
}