#include<iostream>
using namespace std;
 
int binarysearching(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2; // Changed from min to mid
    
    while (start <= end) {
        if (arr[mid] == target) {
            return mid; // Element found
        }
        else if (target > arr[mid]) {
            start = mid + 1; // Move to the right 
        }
        else {
            end = mid - 1; // Move to the left
        }
        mid = (start + end) / 2; // Recalculate mid
    }
    return -1; // Element not found
}
 
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int target = 90;
    int size = 9;
     int ansIndex = binarysearching(arr, size, target);
    
   if(ansIndex == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << ansIndex << endl;
    }
  }   
//linear search
// #include<iostream>
// using namespace std;
// bool printarray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]==80){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[]={10,20,30,40,50,60,70};
//     int size=7;

//     if(printarray(arr,size)==true){
//         cout<<"the value is true";
//     }else{
//         cout<<"the condition is false";
//     }
//     return 0;
// }
