// #include<iostream>
// using namespace std;
//  int main(){
//       int a=5;
//       cout<<"enter the value of a "<<&a<<endl;
//       char b[10];// 4byte=10*4=40ans
//       cout<<"enter the value"<<sizeof(b)<<endl;
//       return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int arr[5]={1,3,5,6,7};
// cout<<arr[0]<<endl;
// cout<<arr[1]<<endl;
// cout<<arr[2]<<endl;
// cout<<arr[3]<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//       int arr[50]={3,4,5,6,7,8,1}; 
//      int n=7;
//     for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//     }
// }


//taking input in array
// #include<iostream>
// using namespace std;
// int main(){
//       int arr[5];
//       int n=5;
//       for(int i=0;i<n;i++){
//           cout<<"enter the value for index "<<i<<":";
//           cin>>arr[i];
//           cout<<endl;
//       }
//       cout<<"printing the array"<<endl;
//       for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//       }
// }

//print double array
// #include<iostream>
// using namespace std;
// int main(){

// int arr[10];
// int n=10;
// for(int i=0;i<n;i++){
//       cout<<"enter the value of index i :";
//       cin>>arr[i];
//  //double     
// }
// cout<<"double :"<<endl;
// for(int i=0;i<n;i++){
//       arr[i]=2*arr[i];
// }
// //print
// cout<<"printing afer taking double"<<endl;
// for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
// }
// }

// #include<iostream>
// using namespace std ;
// int main(){
//       int brr[5];
//       int n=5;
//       for(int i=0;i<n;i++){
//             cout<<"enter the input index "<<i<<":";
//             cin>>brr[i];
//       }
//       cout<<"print the sum :"<<endl;
//       int sum=0;
//       for(int i=0;i<n;i++){
//            // int sum=0;
//             sum=sum+brr[i];
//       }
//       cout<<sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//       int arr[5] ={2,4,6,8,10};
//       int target=10;
//       int n=5;

//       bool  flag=0;
//       for(int i=0;i<n;i++){
//           if(arr[i]==target){
//             flag=1;
//             break;
//           }
//       }
//           if(flag==1){
//             cout<<"target found"<<endl;
//           }else{
//             cout<<"target not found"<<endl;
//           }
      
//       return 0;
// // }

//funtion array
#include<iostream>
using namespace std;

int printarray(int arr[5],int size){
      for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
      }
     // cout<<endl;
}
int main(){
      int arr[5]={2,4,6,8,10};
      int size=5;
      printarray(arr,size);
}