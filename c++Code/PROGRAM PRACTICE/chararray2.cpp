//convert in capital later
#include<iostream>
using namespace std; 

void converttouppercase(char ch[],int n){

      int index=0;

     while(ch[index] != '\0'){
        char currentCharacter=ch[index];
        if(currentCharacter >= 'a'&& currentCharacter <= 'z'){
            ch[index]=currentCharacter-'a' + 'A';
            }
        index++;
     } 
    // cout<<"totle number of index :"<<index;
}
int main(){
     char ch[100];
     cin.getline(ch,100); //print the all sentences
    // cin>>ch;

     cout<<"before:"<<ch<<endl;

     converttouppercase(ch,100);
     cout<<endl<<"after:"<<ch<<endl;
     //cout<<"total chatacter"<<index;
}
 