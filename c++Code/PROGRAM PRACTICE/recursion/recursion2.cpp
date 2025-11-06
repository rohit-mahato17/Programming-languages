// //peint ansy program
// #include<iostream>
// using namespace std;
// int main(){
//     // int num=5;
//     // int n=num;
//     // for(int i=0;i<=n;i++){
//     //     if(i == 0 || i == 4){
//     //         continue;
//     //     }else{
//     //         cout<<i<<endl;
//     //     }
//     // }

//     // int arr[]={10,20,30,40,50,60,80};
//     // int size=sizeof(arr)/sizeof(int);

//     // for(int i=0;i<=size;i++){
//     //     cout<<arr[i]<<endl;
//     // }

//     int num=6;

    
    
//     // for(int i=num;i>0;i--){
//     //     for(int j=1;j<=num;j++){
//     //         if(j>=i){
//     //             cout<<"*";
//     //         }else{
//     //             cout<<" ";
//     //         }
//     //     }
//     //     cout<<endl;
//     // }

//     int i=num;
//     while(i>0){
//         int j=1;
//         while(j<=num){
//             if(j>=i){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//             j++;
//         }
//         cout<<endl;
//         i--;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n=5;
     int factorial=1;
    for(int i=1;i<=n;i++){
       factorial*=i;
    }
    cout<<"The value of factorial:"<<factorial;
    
}