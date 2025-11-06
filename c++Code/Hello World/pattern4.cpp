#include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"enter the value:";
    cin>>n;

    int a=1;
     int moy=1; // Agar yah int while loop se sabse pahle hai yah Jahan se rukega vahin say chalega
  //   char moy='A';
 //   float moy=1.44;
    while(a<=n)
    {
        int b=1;
        
        while(b<=n)
        {
            cout<<moy<<" ";
            moy++;  //Aur yah increment while loop ka under mein chalega
            b++;
        }
        cout<<endl;
        a++;

    }
    return 0;
 }