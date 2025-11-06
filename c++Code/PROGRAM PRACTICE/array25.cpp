#include<iostream>
using namespace std;
int printarray(int arr[4][4],int row,int col){
    //int sum=0;
    int i=0;
    int j=2;
    for( ;j>=0;j--){
       // for(int j=0;j<row;j++){
            //int sum=0;
           cout<<arr[i++][j];
           // cout<<arr[i][j]<<" ";
        }
       // cout<<sum;
        //cout<<endl;
   // }
    //cout<<sum;
}
int main(){
    int arr[4][4]={
        {1,2,3,4},
        {6,7,8,9},
        {11,12,13,14},
        {16,17,18,19},
    };
    int row=4;
    int col=4;

    printarray(arr,row,col);
}
