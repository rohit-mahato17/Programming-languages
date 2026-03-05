// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int arr[] = {1, 4, 2, 9, 14, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // sort(arr, arr + n); // Ascending
//        sort(arr, arr+n,greater<int>()); // Descending

//     cout << "Ascending order: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

#include<iostream>
using namespace std;
int main(){
    // int arr[]={10,20,30,40,50};
    int arr[]={57,15,25,1,-15,24};
    int n = sizeof(arr) / sizeof(arr[0]); 
     
    // for(int i=0; i<n; i++){
    //    cout<<arr[i]<<" ";
    // }
    int max = arr[0];
    for(int i=1; i<=n; i++){
        if(arr[max] <= arr[i]){
            max = arr[i];
        }
    
    }
     cout<<max;

    return 0;
}
