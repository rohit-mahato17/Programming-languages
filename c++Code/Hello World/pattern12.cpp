#include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"anter aney value";
    cin>>n;

    int i=1;

    while(i<=n)
    {
        //space print karlo
        int space=n-i+1;
        while(space)
        {
         cout<<" ";
         space--;
        }
        //star print karlo
        int j=1;
        while(j<=n)
        {
         cout<<"*";
         j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
 }