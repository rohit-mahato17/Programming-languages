//Largest element in array
#include<bits/stdc++.h>
using namespace std;
int main(){
      int arr[]={10,3,6,1,45,67,99};
      int size=7;
      int largestno=0;
      for(int i=0;i<size;i++){
           if(arr[i]>largestno){
            largestno=arr[i]; 
           }
      }
      cout<<largestno<<endl;
}
