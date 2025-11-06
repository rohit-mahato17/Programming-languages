#include<iostream>
 using namespace std;
 int main(){
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
     cout<<i<<" ";
       
     int j=1;
    while(j<=i){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;    
    }
    return 0;
 }
 /*output : 1 *
            2 **
            3 ***
            4 ****  */
