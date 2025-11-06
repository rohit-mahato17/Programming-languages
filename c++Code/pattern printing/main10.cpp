// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
#include<iostream>
using namespace std;
int main(){
    int n=5;
    
    for(int i=n;i>=1;i--){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int k=i;k>0;k--){
            cout<<"* ";
        }
        cout<<endl;
    }
}