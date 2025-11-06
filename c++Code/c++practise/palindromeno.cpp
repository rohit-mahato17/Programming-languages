// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n = 1221;
    
//     // Convert number into string
//     string s = to_string(n);
//     int l = 0;
//     int r = s.size()-1;
    
//     // Compare both characters 
//     // pointed by l and r pointer
//     while (l<r) {
//         if (s[l] != s[r]) {
//             cout << "Not Palindrome.";
//             return 0;
//         }
      
//         // Move both pointers
//         // towards center.
//         l++, r--;
//     }
    
//     // All characters matched
//     // means number is palindrome.
//     cout << "Palindrome.";
//     return 0;
// }

//string type
// #include<iostream>
// using namespace std;

// int main(){
    
//     string str="neun";
//     string n=str;
//     int s=0;
//     int end=n.size()-1;
//     bool palindrome = true;
    
//     while(s<end){
//         if(str[s] != str[end]){
//             palindrome = false;
//             break;
//         }
//         s++,end--;
//     }
    
//     if(palindrome){
//         cout<<"The string is palindrome";
//     }else{
//         cout<<"not palindrome";
//     }
//  return 0;

//}

//palindrome 
#include<iostream>
using namespace std;
int main(){
    string str1 ;
    cin>>str1;
    string str1_rev;
    for(int i=str1.size()-1;i>=0;--i){
        str1_rev.push_back(str1[i]);
    }
    cout<<str1_rev<<endl;
    if(str1 == str1_rev){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;

//     string str_rev;
//     for(int i=str)
// }