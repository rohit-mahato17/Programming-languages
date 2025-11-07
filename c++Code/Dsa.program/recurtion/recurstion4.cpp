//climbing stairs

#include<iostream>
using namespace std;
int climbing(int n){
    if(n==0 || n==1){
        return 1; 
    }
    int ans=climbing(n-1)+climbing(n-2);
    return ans;
}
int main(){
    int n=4;
    cout<<climbing(n);
}
