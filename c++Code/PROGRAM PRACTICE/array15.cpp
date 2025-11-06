#include<iostream>
using namespace std;
int printarray(int crr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<crr[i]<<","<<crr[j]<<endl;
        }
       cout<<endl;
    }
}
int main(){
    int crr[]={10,20,30};
    int size=3;
    printarray(crr,size);
    return 0;
}

