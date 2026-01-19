//square pattern
#include<iostream>
using namespace std;

int main(){
    int n=3;
    int val=1;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<< val << " ";
                val++;
            }
            cout<<endl;
        }
        cout<<val;

        return 0;
}