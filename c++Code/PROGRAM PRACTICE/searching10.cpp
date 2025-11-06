//selection sort
#include<iostream>
using namespace std;
int selectionsort(int dsa[],int n){
    for(int i=0;i<n-1;i++){
        int smallestindex=i;
        for(int j=i+1;j<n;j++){
            if(dsa[j]<dsa[smallestindex]){
                smallestindex=j;
            }
        }
        swap(dsa[i],dsa[smallestindex]);
    }
}
void printarray(int dsa[],int n){
    for(int i=0;i<n;i++){
        cout<<dsa[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int dsa[]={4,1,5,2,3};
    int n=5;
    selectionsort(dsa,n);
    printarray(dsa,n);
    return 0;
}
