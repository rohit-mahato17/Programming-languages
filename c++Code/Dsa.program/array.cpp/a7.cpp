// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;

//     reverse(arr, arr + n);  

//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    vector<int> arr={1,2,3,4,5};
//    reverse(arr.begin(),arr.end());

//    for(int x : arr){
//     cout<< x <<" ";
//    }
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>  arr= {1, 2, 3, 4, 5};
     for(int i=arr.size()-1;i>= 0;i--){
           cout<<arr[i]<<" ";
     }
     return 0;
}
