#include<iostream>
using namespace std;
bool printarray(int arr[3][3],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
               // return true;
               cout<<"found this value: "<<target;
               break;
            }
            }
        }
 }

int main(){
    int arr[3][3]={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
int row=3;
int col=3;
int target=70;
int momos = printarray(arr,row,col,target);
//cout<<"found or not :"<<momos;
   return 0;
}
 