//split a string into a number of sub-string
#include<iostream>
using namespace std;
int main(){
    string str="welcome geeks to the geeksforgeeks portal";
    int n=str.size();
    //cout<<"all is good";
    for(int i=0 ; i<n ; i++){
        if(str[i] == ' '){
            cout<<endl;
        }else{
            cout<<str[i];
        }
    }
    return 0;
}
