#include<iostream>
using namespace std;
int main(){
    // cout<<"Hello World";
//   return 0;
//..............

// int num;
// cout<<"Enter any number";
// cin>>num;
// cout<<" Enter Numner: "<<num;
//....................

// char x='A';
// cout<<"The value of ascii "<< x <<" is: "<<int(x);
//....................

// char ch,str[100]={"syakbags"};
// int i=0,val;
// while(str[i]){
//     ch=str[i];
//     val=ch;
//     cout<<" The value of ASCII "<< ch <<" is ="<<val<<endl;
//     i++;
// }
//................

//int print intiger value;
//char print character value
char c;
for(c='A';c <= 'Z';c++){
    int x=c;           
    cout<<" The value of ASCII "<< c << " = " <<x <<endl;
}
return 0;
}

