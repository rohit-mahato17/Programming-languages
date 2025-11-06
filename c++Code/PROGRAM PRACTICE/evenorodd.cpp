//right a program to print even or odd
#include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"chechake even or odd "<<endl;
    cin>>n;
    while(n%2==0){
      cout<<"even"<<endl;
      break;
       }
    
      if(n%2==1){
       cout<<"odd"<<endl;
    }
    

    return 0;
 }