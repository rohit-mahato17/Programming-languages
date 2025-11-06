//wright a program to find the maximum and minimum in ar array
#include<iostream>
#include<vector>
using namespace std;
void maxormin(vector<int> arr){
    int n=arr.size();
    
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
    cout<<"The maximum of element is="<<max<<endl;
    cout<<"the minimum of element is="<<min;
  
}
int main(){
    vector<int> arr={10,12,48,22,18};
    maxormin(arr);
}