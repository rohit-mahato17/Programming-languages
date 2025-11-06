#include<iostream>
 using namespace std;
 int main(){


    for(int i=0;i<=4;i++){/*output: 0
                                    2
                                    4*/
        cout<<i<<endl;
       i++;
    }

 /* for(int i=1;i<=3;i--){/*output: 0
                                    0
                                    0
        cout<<i<<endl;
       i++;
    }*/

    for(int i=0;i<=15;i+=2){
        cout<<i<<" "<<endl;
        if(i&1){
            continue;
        }
        i++;
    }

    for(int i=0;i<=5;i++){
        for(int j=i;j<=5;j++){
            cout<<i<<" "<<j<<endl;
        }
    }

 }