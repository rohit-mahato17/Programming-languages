//Sum of Array Elements
#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int> arr={10,20,30,40,50};
    int sum=1;

     for(int i=1;i<=arr.size();i++){
        sum *= i;
     }
     cout<<"sum of the array is:"<<sum;
}