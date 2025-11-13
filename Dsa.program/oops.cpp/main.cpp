// write a program to check weather a number is positive or nagative Number
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int number=-99;

//     if(number >= 0){
//         cout<< number <<" is a positive number"<<endl;
//     }else{
//         cout<< number <<" is a nagative number"<<endl;
//     }
// }

// Write a program to find the greatest of the three numbers
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int a=100 ,b=20,c=30;

//     if(a >=b && a >= c){
//         cout<<"Greatest no a";
//     }else if(b >= a && b >= c){
//         cout<<"GREATER NO IS B"<<endl;
//     } else{
//         cout<<"gretest no is c"<<endl;
//     }

// }

// write a program to check wheather a number is even odd;
//  #include<iostream>
//  using namespace std;
//  int main(){

//     // cout<<" Enter the any number of n: "<<endl;
//     // cin>>n;

//     // if(n%2 == 0){
//     //     cout<<"Even bol"<<endl;
//     // }else{
//     //     cout<<"odd bol"<<endl;
//     // }
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int size=sizeof(arr)/sizeof(int);
//     for(int i=0;i<size;i++){
//         if(arr[i]%2==0){
//             cout<<"even"<<" ";
//         }else{
//             cout<<"odd"<<" ";
//         }
//     }

// }

// Write a program to find the ASCII value of a character
//  #include<iostream>
//  using namespace std;
//  int main(){
//      char ch='A';

//     // cout<<"Ascii value of the A: "<<bool(ch);
//     // return 0;
//     for(char i=ch;i<='Z';i++){
//         cout<<i<<"="<<int(i)<<endl;
//     }
//     return 0;

// }

// write a program to check wheather a character is a vowel or conconant
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[] = {'a', 'b', 'c', 'd', 'e'};
    int n = sizeof(char) / sizeof(ch);

    for (int i = 0; i < 5; i++)
    {

        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'O' || ch[i] == 'U')
        {
            cout<<"vovel"<<endl;
        }else{
            cout<<"is a consonant"<<endl;
        }
    }

    return 0;
    
}