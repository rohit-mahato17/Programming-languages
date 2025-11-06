#include<iostream>
using namespace std;
int main(){
    int decimalnumber=10;
    int ans=0;
    int pow=1;
    
    while(decimalnumber > 0){
        int rem= decimalnumber%2;
        decimalnumber= decimalnumber / 2;

        ans += (rem*pow);
        pow = pow*10;
        cout<<ans<<endl;
    }
    
}
  