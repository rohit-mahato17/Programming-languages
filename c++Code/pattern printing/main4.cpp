// *****
//  ****
//   ***
//    **
//     *
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<=n;i++){
//         // for(int j=n-i;j>=1;j--){
//         //     cout<<" ";
//         // }
//         for(int k=1;k<=i;k++){
//             cout<<" ";
//         }
//         for(int j=1;j<=n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
//2
// #include<iostream>
// using namespace std;
// int main(){
//     int v=5;
//     for(int i=v;i>=1;i--){
//         for(int j=v-i;j>0;j--){
//             cout<<" ";
//         }
//         for(int k=i;k>=1;k--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
//3

// #include<iostream>
// using namespace std;
// int main()
// {
// int n=5;

// for(int i=0;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<" ";
//     }
//     for(int k=1;k<=n-i;k++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }

//4
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=n;i>=1;i--){
//         for(int j=n-i;j>0;j--){
//             cout<<" ";
//         }
//         for(int k=i;k>=1;k--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
//5
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=n;i>0;i--){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int k=i;k>0;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}