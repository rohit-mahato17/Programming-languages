//Minimum Operations to Make Array Sum Divisible by K
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={3,9,7};
    int k=5;
    int totalsum=0;
    for(int i=0; i<arr.size(); i++){
       totalsum += arr[i];
    }
    int rem = totalsum % k;
    if(rem == 0){
        cout<<"olready divisible->0"<<endl;
        return 0;
    }else{
        int sum= totalsum-rem;
        if(sum%k == 0){
            cout<<"Not divisible -> 1 operation needed"<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}