//Find Maximum and Minimum Element
#include<iostream>
#include<vector>
using namespace std;

void value(vector<int> arr){
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
           max=arr[i];
        }else if(arr[i]<= min){
            min=arr[i];
        }
    }
    cout<<"maximum value of max is:"<<max<<endl;
    cout<<"minimum value of min is:"<<min<<endl;
}
int main(){
    vector<int> arr={1,4,2,9,14,6};
   
    value(arr);
}
