/*#include<iostream>

 using namespace std;

 int main() {

    int n;
    cin>>n;

    int ans=0;
    int power=1;

    while(n>0){

        int bit = n % 2;
        ans =( bit * power ) + ans;
        power*=10;
         n/=2;
        
    }
    cout<<ans<<endl;
    return 0;
    
 }*/

 // binary to decimal
 #include<iostream>
 #include <math.h>
  using namespace std;
  int main(){
      int n;
      cin>>n;         // 101 ka laste number lana hai matlab 1 ok

      int i=0;        //1) 0   2)1  3)2
      int ans=0;      //1) 0    2)1  2)1

      while(n!=0){       //1) (1!=0)condition true 2)10!=0 true     4)(0!=0)condition false
         int digit=n%10;  //1) 1%10=1    2)10%10=0  3)1%10=1
          
          if(digit==1){  //1) (1==1)condition true     2)
            ans=ans+pow(2,i);     //1) 0+2⁰=1  2)1+2²=5
          }   
          i++;             
          n=n/10;  //1) 101/10=10   2)10/10=1 3)1/10=0             
          
      }
      cout<<ans<<endl;  //ans is 5
      return 0;
  }
  