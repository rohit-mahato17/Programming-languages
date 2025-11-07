// #include<bits/stdc++.h>
// using namespace std;
// bool primeno(int n){

//     int numberis=true;
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//         numberis=false;
//         }
//     }
//     return numberis;
// }
// int main(){
//     int n =17;
//     int prime= primeno(n);
//      if(prime == true){
//         cout<<"Prime Number";
//      }
//      else{
//         cout<<"Not prime Number";
//      }

//      return 0;
// }


#include<iostream>
using namespace std;
bool pno(int n){
    // int numeric=true;
    for(int i=2;i<n;i++){
        if(n%i == 0){
            // numeric=false;
            return false;
        }
    }
    // return numeric;
    return true;
}

int main(){
    int n=17;
    int cA=pno(n);
    if(cA == 1){
        cout<<"True";
    }else{
        cout<<"false";
    }

    return 0;
}