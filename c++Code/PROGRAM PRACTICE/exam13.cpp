#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }


    int v;
    cin>>v;

    int ii=1;
    char value='A';
    while(ii<=v){
        int jj=1;
        while(jj<=n){
            
            cout<<value;
            value++;
            jj++;
        }
        cout<<endl;
        ii++;
    }

    int x;
    cin>>x;

    int ch =1;
    while(ch<=n){
      int jjj=1;
      
         while(jjj<=n){
            char no='A'+ch+jjj-2;
            cout<<no;
            // no++;
             jjj++;
         }
         cout<<endl;
         ch++;
    }

    return 0;
}