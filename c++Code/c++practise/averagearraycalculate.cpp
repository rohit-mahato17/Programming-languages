//wright aprogram to calculate the average of all element present in an array.
#include<iostream>
#include<vector>
using namespace std;
int calculate(vector<int> arr,int sum){
    int n=arr.size();
    
    for(int i=0;i<n;i++){
        sum =sum+arr[i];
    }
    //cout<<sum;
    int array=sum/n;
    return array;
    
}
int main(){
    vector<int> arr={10,2,3,4,5,6,7,8,9};
    int sum=0;
    cout<<"the value of array is:"<<calculate(arr,sum);
}