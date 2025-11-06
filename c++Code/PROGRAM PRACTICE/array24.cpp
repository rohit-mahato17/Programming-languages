#include<iostream>
using namespace std;
void shiftnegativeoneside(int arr[],int n){
    int j=0;

    for(int index=0;index<n;index++){
        if(arr[index]<1){
            swap(arr[index],arr[j]);
            j++;
        }        
    }
//     cout<<"print the array"<<endl;
// for(int i=0;i<n;i++){
 //   cout<<arr[i]<<" ";
//}
}
int main(){
    int arr[]={1,0,1,0,0,1,1};
    int n=7;

    shiftnegativeoneside(arr,n);

//print
cout<<"print the array"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
