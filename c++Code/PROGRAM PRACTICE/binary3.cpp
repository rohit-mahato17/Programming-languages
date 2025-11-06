#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int ans=0;
int power=1;
while(n>0){
    int lastdigit=n%10;
    ans=ans+(lastdigit*power);
    power=power*2;
    n=n/10;
}
cout<<ans;

return 0;
}
// For input n = 101 (binary for decimal 5):

// 1) Iteration 1: lastdigit = 1, ans = 1 * 1 = 1, power = 2
// 2) Iteration 2: lastdigit = 0, ans = 1, power = 4
// 3) Iteration 3: lastdigit = 1, ans = 1 + 1 * 4 = 5