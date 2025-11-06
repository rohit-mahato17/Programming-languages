#include<iostream>
using namespace std;
int recurtion(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        cout<<n<<" "; 
        return 1;
    }
   // cout<<n<<" ";
    int max=recurtion(n-1);
    cout<<n<<" ";
    //int h=n*max;
    //return h;

}
int main(){
    int n=5;
   recurtion(n);
}