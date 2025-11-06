//wright the static program..
#include<iostream>
using namespace std;

int duck(int a ,int b)
{
    static int c=0;//this execute only one time
    c=c+1;
    return a*b+c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"The value is "<<duck(a,b)<<endl;
    cout<<"The value is "<<duck(a,b)<<endl;
    cout<<"The value is "<<duck(a,b)<<endl;
    cout<<"The value is "<<duck(a,b)<<endl;
    cout<<"The value is "<<duck(a,b)<<endl;


}