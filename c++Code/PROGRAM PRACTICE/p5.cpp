#include<iostream>
using namespace std;
 void lastoccltr(string&s,char x,int i,int&ans){
    if(i<s.size()){
        return;
    }
    if(s[i]==x){
        ans=i;
    }
    lastoccltr(s,x,i+1,ans);
 }
int main(){
    string s;
    cin>>s;
     char x;
     cin>>x;
     int ans=-1;
     int i=0;
     lastoccltr(s,x,ans,i);
     cout<<ans<<endl;
}