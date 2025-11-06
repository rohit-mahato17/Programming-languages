// a
// ab
// abc
// abcd
// abcde
#include<iostream>
using namespace std;
int main(){
    int n=5;
   
    for(int i=1;i<=n;i++){
            char character='a';
        for(int j=1;j<=i;j++){
            cout<<character++;
        }
        cout<<endl;
    }
}