// Find missing element
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5};
    int n=5;

    int b=0,a=0;
    for(int i=1; i<=n;i++){
        b ^=i;

    }
    for(int x:arr){
        a ^=x;
    }

    cout<<"missing Number:"<<(b^a);
    return 0;
    
}
