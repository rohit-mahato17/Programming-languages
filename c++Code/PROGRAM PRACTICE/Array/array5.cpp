// #include<iostream>
// #include<string.h>
// using namespace std;

// int sizeofcall(char ch[],int size){
//     int length=0;

//     for(int i=0;i<size;i++){
//         if(ch[i]== 0){
//            break;
//         }else{
//             length++;
//         }
//     }
//     return length;
// }

// int main(){
//     char ch[100];
//     cin>>ch;
//     // cout<<strlen(ch)<<endl;//easy to check length of ch
//     int key=sizeofcall(ch,100);
//      cout<<"The value of length:"<<key;
// }

#include<iostream>
using namespace std;
int main(){
    int n=4;
    int dj=0;

    if(n <= 1){
        cout<<"not prime number";
    }else{
    for(int i=1;i<=n;i++){
        if(n % i == 0){
            dj++;
        }
    }
    }
    if(dj > 2){
        cout<<"not prime number:";
    }
    else{
        cout<<"prime no hai";
    }
    return 0;
}