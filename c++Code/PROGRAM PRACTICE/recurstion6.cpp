#include<iostream>
using namespace std;
int fit(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans=fit(n-1)+fit(n-2);
    return ans;
}
int main(){
cout<<fit(7)<<endl;
}

//  #include<iostream>
//  using namespace std;
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int ans= n + sum(n-1);
//     return ans;
// }
//  int main(){
//  cout<<sum(5)<<endl;
// }
