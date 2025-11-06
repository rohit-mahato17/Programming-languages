//subsequences of string
//include or exclude
#include<iostream>
using namespace std;
void findsubsequences(string str,string output,int index){
    //base case 
    if(index >= str.length()){
        //ans jo h, vo output string me build ho chuck h
        //print kado
        cout<<"->"<<output<<endl;
        return; 
    }
    char ch =str[index];

    //exciude
    findsubsequences(str,output,index+1);
    //include
    //output string me ch character ko include krdo
    output.push_back(ch);
    findsubsequences(str, output, index+1);
}
int main(){
   string str="abc";
   string output="";
   int index=0;
   findsubsequences(str,output,index);
}