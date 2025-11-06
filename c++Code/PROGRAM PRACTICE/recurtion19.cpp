//Last occurence of a char
 #include<iostream>
 using namespace std;
 void lastoccurence(string s,char x,int index,int &ans){
    if(index>=s.size()){
        return;
    }
    if(s[index]==x){
        ans=index;
    }
     lastoccurence(s,x,index+1,ans);
 }
 int main(){
    string s;
    cin>>s;

    char x;
    cin>>x;
    int index=0;
    int ans=-1;
    
   lastoccurence(s,x,index,ans);
    cout<<ans<<endl;
 }