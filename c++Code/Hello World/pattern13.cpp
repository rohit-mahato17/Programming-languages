/*#include<iostream>
 int main(){
    for(int i=1;i<=3;i++){
        int j=1;
        if(j<=6){
           cout<<"*";
           j++; 
        }else{
       cout<<endl; 
        }
    }
    
    return 0;
 }*/
 #include<iostream>
  using namespace std;
   int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
   }
  