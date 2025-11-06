//print maximum value or minimul value
#include <iostream>
using namespace std;

// int getmin(int num[], int n) {
//     int min = num[0];  // Initialize min with the first element of the array
//     for (int i = 1; i < n; i++) {  // Start loop from the second element
//        if (num[i] < min) {      
//             min = num[i];         
//        }
        
//     }
//     return min;
// }

// int getmax(int num[], int n) {
//     int max = num[0];  // Initialize max with the first element of the array
//     for (int i = 1; i < n; i++){  // Start loop from the second element
//         if (num[i] > max) {
//             max = num[i];
//         }
        

//     }
//     return max;
// }

// int main() {
//     int size;
//     cin >> size;

//     int num[100];

//     // Taking input in the array
//     for (int i = 0; i < size; i++) {
//         cin >> num[i];
//     }

//     cout << "Maximum value is " << getmax(num, size)<<endl ;
//     cout << "Minimum value is " << getmin(num, size)<<endl ;

//     return 0;
//}
int main(){
    int arr[]={1,10,2,3,4,7,6};
   // int arr[10];
    int size=7;
    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
    //}
     int max=arr[0];
     //int max1=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        // if(arr[i]<max1){
        //     max1=arr[i];
        // }
        
    }
    cout<<"maximum value:"<<max<<endl;
  //cout<<"minimum value:"<<max1<<endl;
}
