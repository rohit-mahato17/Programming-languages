#include<iostream>
using namespace std;
void matrixe(int arr[3][4],int row,int col){
    //int sum=0;
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
          sum=sum+arr[j][i];
        }
        cout<<"Col of the sum:"<<sum<<endl;
    }
    //cout<<sum;
}

int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int row=3;
    int col=4;
    matrixe(arr,row,col);
}
