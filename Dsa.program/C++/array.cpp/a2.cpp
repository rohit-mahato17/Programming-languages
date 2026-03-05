//Linear serch

// #include<iostream>
// using namespace std;
// int linearsearch(int arr[],int n){
//     int target=4;
//     for(int i=0; i<n; i++){
//          if(arr[i]==target){
//             return i;
//          }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={10,40,4,2,60,55};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     cout<<"index of value is: "<<linearsearch(arr,n);

//     return 0;
    
// }

//binary search
// #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int n){
//  int targer=400;
//  int start=0;
//  int end=n-1;
//  int mid=(start+end)/2;
 
//   while(start <= end){
//        if(arr[mid]==targer){
//         return mid;
//        }
//        else if(targer > arr[mid]){
//                start=mid+1;
//        }
//        else{
//         end=mid-1;
//        }
//        mid=(start+end)/2;

//   }
//   return -1;
   
// }
// int main()
// {
//     int arr[]={10,20,30,40,50};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int len=binarysearch(arr,n);

//     if(len != -1){
//         cout<<"found the target"<<endl;
//     }
//     else{
//         cout<<"Not found the target";
//     }

//     return 0;
// }

// Search in Descending Order Array 

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[]={10,20,30,40,50};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }


//     return 0;
// }

//Rotated Sorted Array
#include<iostream>
using namespace std;
int searchRotated(int arr[],int n,int key){
    int low=0,hight=n-1;

    while(low <= hight){
        int mid=(low+hight)/2;

        while(low <= hight){
            if(arr[i] == key)
        }
    }
}

int main(){
    int arr[]={40,50,60,70,10,20,30}
    int n=7;
    int key=10;

    int index=searchRotated(arr,n,key);
}
