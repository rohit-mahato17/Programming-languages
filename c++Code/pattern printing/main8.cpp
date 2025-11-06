// a
// bc
// def
// ghij
// klmno
#include<iostream>
using namespace std;
int main(){
    int n=5;
    
    char charecter='a';
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<charecter;
            charecter++;
        }
        cout<<endl;
    }
}