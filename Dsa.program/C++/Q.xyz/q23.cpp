//Count even and odd number
#include<iostream>
using namespace std;
int main(){
      int n=10;
      int evn=0;
      int odd=0;
      for(int i=1 ; i<=n; i++){
          if(i%2==0){
            evn++;
          }else{
            odd++;
          }
      }
      cout<<"Total even NO: "<<evn<<endl;
      cout<<"Total odd NO: "<<odd<<endl;
}