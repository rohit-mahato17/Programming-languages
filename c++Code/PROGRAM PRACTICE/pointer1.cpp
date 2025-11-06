#include<iostream>
using namespace std;
int main(){
     int i=0;
    int marks[i]={11,44,55,66,77,99};
    while(i < 5){

        cout<<"the value of marks"<<i<<"is"<<marks[i]<<endl;
        i++;
    }
    
     for(int i=0;i<5;i++){
        cout<<" the value of marks "<< i <<" is "<<marks[i]<<endl;
        
     }

     int*p=marks;
     cout<<"the value of marks[0] "<<*p<<endl;
     cout<<"the value of marks[1] "<<*(p+1)<<endl;
     cout<<"the value of marks[2] "<<*(p+2)<<endl;
        return 0;
     
}