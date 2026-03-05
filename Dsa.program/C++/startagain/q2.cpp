// // 1. Write a C++ Program to Check Whether a Number is a Positive or Negative Number.
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter any number: ";
//     cin>> num;

//     if(num >= 0){
//         cout<<"positive number";
//     }
//     else{
//         cout<<"nagative number";
//     }

//     return 0;
// }

// 2. Write a Program to Find the Greatest of the Three Numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int a=9 ,b=99, c=999;

//     if(a >= b && a >= c || a<=c){
//         cout<< "Gretest num is a"<< endl;
//     }
//     else if(b >= a && b >= c){
//         cout<< "Greatest num is b"<< endl;
//     }
//     else if(c >= a && c >= b){
//         cout<< "Gretest num is c"<< endl;
//     }

//     return 0;
// }


// 3. C++ Program To Check Whether Number is Even Or Odd

// #include<iostream>
// using namespace std;
// int main(){
//     int num = 7;

//     // if(num%2 == 0){
//     //     cout<<"false";
//     // }
//     // else{
//     //     cout<<"true";
//     // }
//     int count=0;

//     for(int i=1; i < num; i++){
//         if(num%i == 0){
//             count++;
//         }
//         else{
//             continue;
//         }
//     }
//     cout<<count;

//     return 0;
// }

//  Write a Program to Find the ASCII Value of a Character

// #include<iostream>
// using namespace std;

// int main(){
    
//     for(int i='a'; i<='z';i++){
//         cout<< char(i) <<" ";
//     }

//     return 0;
// }

// 5. Write a Program to Check Whether a Character is a Vowel or Consonant

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
// string ch = "hello world";

// for(int i=0; i<ch.length(); i++){
// if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u'){
//     cout<< "Value is vovel:"<<ch[i] <<endl;
// }else if(ch[i] == ' '){
//     cout<<"space";
// }
// else{
//     cout<< "not vovel"<<endl;
// }
// }

// return 0;
// }

// 6. Write a Program to Print Check Whether a Character is an Alphabet or Not

// #include<iostream>
// using namespace std;
// int main(){
//     string ch = "hello";
     
//     for(int i=0; i<ch.length(); i++){
//     if(isalpha(ch[i])){
//         cout<<" alphabatech: "<< ch[i] <<endl;
//     }else{
//         cout<<" not alphabate ch";
//     }

//     }

//     return 0;
// }

// Write a Program to Find the Length of the String Without using strlen() Function

// #include<iostream>
// using namespace std;
// int main(){
//     string str= "Lengthofstring";
//     int length = 0;
//     for(int i=0; str[i] != '\0'; i++){
//         length++;
//     }

//     cout<< length;

//     return 0;
// }

//write a program to toggle each chatacter in string
// #include<iostream>
// using namespace std;
// int main(){

//     string str = "GrandFinalay";

//     for(int i=0; str[i] != '\0'; i++){
//          if (islower(str[i])) {
//             str[i] = toupper(str[i]);
//         }
//         else if (isupper(str[i])) {
//             str[i] = tolower(str[i]);
//         }
//     }
//     cout<< str;
// }

// 9. Write a Program to Count the Number of Vowels 

#include<iostream>
using namespace std;
int main(){
    string str="homeworknotcompleted";
    // int counti=0;

    for(int i=0; i<str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            continue;
        }else{
            cout<< str[i];
        }
    }
    // cout<<counti;
}