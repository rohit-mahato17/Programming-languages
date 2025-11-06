#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int ki=1;
    
    while(ki<=n){
        int j=1;
        while(j<=ki){
            cout<<ki;
            
            j++;
        }
        cout<<endl;
        ki++;
    }
    return 0;
}