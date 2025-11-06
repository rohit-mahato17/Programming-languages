/*#include<iostream>
 using namespace std;
  int main(){
    int n;
    cin>>n;

    int royal=1;
    while(royal<=n)
    {
         int blenders=1;
        while(blenders<=n)            //output=54321
        {                                      54321
                                               54321
           
                cout<<n-blenders+1;
                blenders++;
            
        }
        cout<<endl;
        royal++;
    }
    return 0;
  }*/

#include<iostream>
 using namespace std;
  int main(){
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n){
      int j=1;
      while(j<=n){
        
          char ch=n-i+1;
          cout<<ch;
          j++;
      }
      cout<<endl;
      i++;
    }
    return 0;
    
  }