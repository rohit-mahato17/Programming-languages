#include<iostream>
using namespace std;
int main(){

 /*   int n;
    cout<<"enter the value";
    cin>>n;

    int i=1;
    while(i<=n){

    //    int space=n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //         }
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;

}*/

// int n;
// cin>>n;

// for(int i=1;i<=n;i++){
//        int space=1;
//         while(space<=n-i){
//              cout<<" ";
//             space++;
//              }



//     for(int j=1;j<=n-i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
 
// }

int n;
cin>>n;

int i=1;
  while(i<=n){
    for (int k = 1; k < n; k++) {
            cout << " ";
    
    }

        int j=1;
       while(j<=i){

        cout<<"*";
        j++;
      }
    //   int ro=n-i+1;
    //     while(ro){
    //         cout<<"*";
    //         ro--;
     //   }
      cout<<endl;
      i++;
  }
  return 0;

}