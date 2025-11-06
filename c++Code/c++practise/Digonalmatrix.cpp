//Wrigh a program to print digonal program
#include<iostream>
using namespace std;
void digonalprogram(int arr[4][4],int row,int col){
    int sum=0;
    int mus=0;
    int m=3;
    for(int i=0;i<col;i++){
        sum += arr[i][i];
        mus += arr[m][i];
        m--;
    }
    cout<<"Principal digonal: "<<sum<<endl;
    cout<<"secondary digonal: "<<mus<<endl;
}
int main(){
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int row=4;
    int col=4;
    //cout<<"all is good";
    digonalprogram(arr,row,col);
    
    return 0;
}