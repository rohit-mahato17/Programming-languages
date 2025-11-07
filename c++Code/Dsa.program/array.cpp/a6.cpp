//Count Even and Odd Numbers
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,3,5,6,7,2,4,9};
    int even=0;
    int odd=0;
    for(int i=0;i<arr.size();i++){
       if(arr[i]%2==0){
        even++;
       }else{
        odd++;
       }
    }
    cout<<"Total even is:"<<even<<endl;
    cout<<"Total odd is:"<<odd<<endl;

    return 0;
}