#include<iostream>
using namespace std;
int print(int n){
    if(n==0){
     return 1;
    }

    int ans=2*print(n-1);
        return ans;

}
int main(){
    cout<<print(10)<<endl;
}