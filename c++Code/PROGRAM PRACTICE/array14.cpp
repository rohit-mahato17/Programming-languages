#include<iostream>
using namespace std;
int getunique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    
    }
    return ans;
}
int main(){
    int arr[]={2,10,11,10,2,13,15,13,15};
    int size=9;
    int finalans = getunique(arr,size);
    cout<<"final answer is :"<<finalans<<endl;

   return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,10,11,10,2,13,15,13,15};
//     int size=9;
//     for(int i=0;i<size;i++){
//         if(arr[i]==11){
//             cout<<"mached the number :"<<arr[i]<<endl;
//         // }else{
//         //     cout<<"not mached the number :"<<arr[i]<<endl;
//         // }
//     }

//   }
// }

//condition true or false represent 0 or 1?
//  #include<iostream>
// using namespace std;
// int getunique(int arr[],int size){
//     int ans;
//     for(int i=0;i<size;i++){
//         ans=arr[i]==11;
//         cout<<ans;
//     }

// }
// int main(){
//     int arr[]={2,10,11,10,2,13,15,13,15};
//     int size=9;
//      getunique(arr,size);

//    return 0;
// }
//output is:001000000
