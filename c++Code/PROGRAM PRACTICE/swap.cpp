      
   /* int main(){   
       int a=10,b=20;

       swap(a,b);

       cout<<"a swapping="<<a<<endl;
       cout<<"b swaping="<<b<<endl;

    return 0;
   }*/

//  #include<iostream>
//  using namespace std;
//  int main(){
//   int a=10,b=30,c;

//   c=a;
//   a=b;
//   b=c;

//   cout<<a<<" "<<b;
//   return 0;
//  }

// #include<iostream>
// using namespace std;
// int main(){
//    int x=10;
//    int y=40;

//    x=x+y; //50
//    y=x-y;
//    x=x-y;

//    cout<<"x ="<<x<<" "<<"y ="<<y<<endl;
//    cout<<"swap is perform is good ";
//    return 0;
// }

#include<iostream>
using namespace std;
int main(){
   int a=2;
   int b=3;

   a=a^b;
   b=a^b;
   a=a^b;

   cout<<"a="<<a<<endl<<"b="<<b;
}
