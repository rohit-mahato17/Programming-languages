#include<iostream>
 using namespace std;
 int main(){
    int i=1;
    for( ;i<=7;i++){
        cout<<i<<endl;
    }
    
 

    for(int i=8;  ;i++){
        if(i<=15){
            cout<<i<<endl;
           
        }else{
            break;
        }
        
    }
     
    for(int i=16;i<=20; ){
        cout<<i<<endl;
        i++;
    } 

    for(int i=1,j=1;i<=5,j<=5;i++,j++){
        cout<<i;
        
        
    }
    return 0;

  } 