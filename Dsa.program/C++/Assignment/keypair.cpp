//key pair
#include<bits/stdc++.h>
using namespace std;
void keypair(int arr[],int num){
    
    for(int i=0;i<num;i++){
        for(int j=i+1; j<num;j++){
            if(arr[i]+arr[j] == 16){

                cout<<"present Number" << "[" << i << "," << j << "]";
                return;
            }
        }
    }
    cout<<"Not present number";
}

int main(){
    int arr[]={1,4,45,6,10,8};
    int num=sizeof(arr)/sizeof(arr[0]);

    keypair(arr,num);
}



