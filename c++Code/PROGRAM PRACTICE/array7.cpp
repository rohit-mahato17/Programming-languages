
//sum of the array
// #include <iostream>
// #include <vector>

// int sumArray(const std::vector<int>& arr) {
//     int sum = 0;
//     for (int num : arr) {
//         sum += num;
//     }
//     return sum;
// }

// int main() {
//     std::vector<int> arr = {2,7,1,-4,11};
//     std::cout << sumArray(arr) << std::endl;  // Output: 15
//     return 0;
// }

#include<iostream>
using namespace std;
int max(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    //cout<<sum;
    return sum;
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    cout<<max(arr,size);
    
}
