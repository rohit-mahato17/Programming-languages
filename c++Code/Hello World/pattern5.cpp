#include<iostream>
 using namespace std;
 int main(){
     int n;
     cin>> n;
     int i=1;
    // int boom=1;
    char boom='A';
     while(i<=n){
        int j=1;
        while(j<=i){
            cout<<boom<<" ";
             boom++;
             j++;

        }
        cout<<endl;
        i++;
     
     }
     return 0;
 }

    