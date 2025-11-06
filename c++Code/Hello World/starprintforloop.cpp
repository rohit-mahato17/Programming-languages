// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"enter the value";
//     cin>>n;

    
//     for(int i=1;i<=n;  ){
//     for(int j=1;j<=n;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//    // i++;
//     }

//     return 0;
    
// }
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the value";
    cin>>n;

    int i=1;
    while(i<=n){
    for(int j=1;j<=n;j++){
        cout<<"*";
    }
    cout<<endl;
    i++;
    }

    return 0;
    
}
