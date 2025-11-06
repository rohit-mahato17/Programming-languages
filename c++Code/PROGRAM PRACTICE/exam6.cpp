#include<iostream>
 using namespace std;
 int main(){
    int num;
    cout<<"enter the number of colom :";
    cin>>num;

    int b;
    cout<<"enter the number of  row:";
    cin>>b;
    int i=1;
    while(i<=num){
        int j=1;
        while(j<=b){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}