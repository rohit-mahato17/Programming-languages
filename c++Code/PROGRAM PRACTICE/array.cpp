#include<iostream>
 using namespace std;

 void printarray(){

 }
 int main(){

    int duck[15];
    cout<<"value at 14 index"<<duck[14]<<endl;
   // int n;
   // cin>>n;
    int second[3]={3,7,8};   //[3]
    cout<<"the value is"<<second[2]<<endl;
    int third[15]={2,7};
    int p=15;
    cout<<"printing the array"<<endl;
    //print the array
    for(int i=0;i<p;i++){
      cout<<third[i]<<" ";
    }

    int fourth[10]={0};
    int c=10;
   cout<<"\nprinting the array"<<endl;
    //print the array
    for(int i=0;i<c;i++){
      cout<<fourth[i]<<" ";
    }
    cout<<endl<<"every thing is find"<<endl<<endl;

    return 0;
 }
 