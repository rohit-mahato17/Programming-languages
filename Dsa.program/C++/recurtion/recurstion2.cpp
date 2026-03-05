//calculate the number of n
#include<iostream>
using namespace std;
void funtion(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    funtion(n-1);
}

int main(){
    int n=5;
    funtion(n);
}
