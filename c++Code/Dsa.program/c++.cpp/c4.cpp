#include<bits/stdc++.h>
using namespace std;
int closetNumber(int n,int m){

    int closest=0;
    int minDifference=INT_MAX;

    for(int i=n-abs(m); i<= n+abs(m); ++i){
        if(i%m==0){
            int different=abs(n-i);
            if(different < minDifference || (different == minDifference && abs(i) > abs(closest))){

                closest =i;
                minDifference=different;
            }
        }
    }
    return closest;
}

int main(){
    int n=13,m=4;
    cout<<closetNumber(n,m)<<endl;

    return 0;
}
//  /->Example: abs(m);

// int m = 4;
// abs(m);   // = 4

// int m = -4;
// abs(m);   // = 4
// So, no matter whether m is positive or negative, abs(m) gives the positive version.

// ❓ Why use abs(m) in your loop?
// To make sure that your loop covers a safe range, even if m is negative.
