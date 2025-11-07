#include<iostream>
using namespace std;
int main(){
    int n=10;
     for(int j=1; j<=n ; j++){
    for(int i=1; i<=n ; i++){
        cout<<j<<"*"<<i<<"="<<j*i<<endl;
    }
    cout<<endl;
}

    return 0;
}