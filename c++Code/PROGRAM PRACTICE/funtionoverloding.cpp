// funtion overloding
// #include<iostream>
// using namespace std;

// int pop(int a,int b){
//     return a+b;
// }
// int pop(int a,int b,int c){
//     return a+b+c;
// }
// int mul(int a,int b){
//     return a*b;
// }
// int sub(int a,int b){
//     return a-b;
// }
// int main(){
      

//     cout<<"enter the value 1st funtion "<<pop(6,4)<<endl;
//     cout<<"enter the value 2nd funtion "<<pop(6,4,5)<<endl;
//     cout<<"enter the value 3rd funtion"<<mul(5,5)<<endl;
//     cout<<"enter the value 4rd funtion"<<sub(6,6)<<endl;
    
// }
#include<iostream>
using namespace std;

int pop(int a,int b){
    return a+b;
}
int pop(int a,int b,int c){
    return a+b+c;
}
int mul(int a,int b){
    return a*b;
}
int sub(int a,int b){
    return a-b;
}
int main(){
      int a,b,c;
      cin>>a>>b>>c;

    cout<<"enter the value 1st funtion "<<pop(a,b)<<endl;
    cout<<"enter the value 2nd funtion "<<pop(a,b,c)<<endl;
    cout<<"enter the value 3rd funtion"<<mul(a,b)<<endl;
    cout<<"enter the value 4rd funtion"<<sub(a,b)<<endl;
    
}