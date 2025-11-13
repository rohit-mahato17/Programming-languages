//Write a program to check whaeather a number is a positive or nagative
#include<bits/stdc++.h>
using namespace std;
// bool numbercheck(int number){

//       if(number >= 0){
//         // cout<<"Positive number"<<endl;
//         return true;
//       }
//       else{
//         // cout<<"nagative number"<<endl;
//         return false;
//       }

// }
// int main(){
//     int n;
//     cin>>n;

//     if(numbercheck(n)== 1){
//         cout<<"Positive number"<<endl;
//     }
//     else{
//         cout<<"nagative number"<<endl;
//     }

// } 

//write  a program to find the greates of the three Numbee

// int main(){

//     int a=10 , b=20 , c=30;
//     if(a >= b && a >= c){
//         cout<<"Greater value a" <<endl;
//     }
//     else if(b >= b && b >= c){
//         cout<<"Greatest number b" <<endl;
//     }
//     else if(c >= a && c >= b){
//         cout<<"Gretast number c" <<endl;
//     }
//     else{
//         cout<<"not mached";
//     }
//     return 0;
// }

// write a program to check wheather a number is zero or not

// int main(){
//     int n;
//     cin>>n;

//     if(n%2==0){
//         cout<<"e";
//     }
//     else{
//         cout<<"o";
//     }

//     return 0;
// }

// Write a program to check ASCii valie;

// int main(){
//     // char ch;
//     // ch='A';

//     // cout<<int(ch);

//     // int n=65;
//     for(int i='A';i<='Z';i++){
//     cout<<int(i)<<" ";
//     }

//     return 0;
// }

// int main(){
//     char ch;
//     cin>>ch;

//     if(isalpha(ch)){
//         if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//             cout<<"Vovel chatacter" <<endl;
//         }
//         else{
//             cout<<"Not Vovel";
//         }
//     }
//     return 0;
// }

// Write a program to print check wheather achatacter is alphabet or not
// int main(){
//     char n;
//     cin>>n;

//     if(isalpha(n)){
//         cout<<"Y" <<endl;
//     }
//     else{
//         cout<<"N" <<endl;
//     }

//     return 0;
// }

//write a program to find the length of the without using strllen() fution

int main(){
string  str="GeeksforGeeks";
int length=0;

for(int i=0; str[i] != '\0'; i++){
    length++;
}

cout<<length;

return 0;
}