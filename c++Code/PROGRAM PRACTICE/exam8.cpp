#include<iostream>
 using namespace std;
 int main(){

    int num;
    cout<<"Enter the num :";
    cin>>num;

    int ro=1;

    while(ro<=num){
        int ra=1;
        while(ra<=ro){
            cout<<"*";
            ra++;
        }
        cout<<endl;
        ro++;
    }
    return 0;
 } 