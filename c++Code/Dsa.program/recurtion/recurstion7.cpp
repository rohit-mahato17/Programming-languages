// //print 1 to n wiyhout using loop
// #include<iostream>
// using namespace std;
// int printno(int n){

//      if(n>0){
//         printno(n-1);
//         cout<<n<<" ";
//      }
//      return 1;
// }
// int main(){
//     int n=10;
//     printno(n);
// } 

//print 1 to n without using loops
#include<iostream>
using namespace std;
void printno(int n){
    
    if(n>0){
        cout<<n<<endl;
        printno(n-1);
    }
    return;
}
int main(){
    int n=10;
    printno(n);
} 