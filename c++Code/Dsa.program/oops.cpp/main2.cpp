// #include<iostream>
// using namespace std;

// class Rectangle {
//     int length, breadth;
// public:
//     void setData(int l, int b) {
//         length = l;
//         breadth = b;
//     }

//     int area() {
//         return length * breadth;
//     }
// };

// int main() {
//     Rectangle r;
//     r.setData(10, 5);
//     cout << "Area of Rectangle: " << r.area() << endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    // int n,a=0,b=1,next;
    // cout<<"Enter the number:";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     cout<<a<<" ";
    //     next=a+b;
    //     a=b;
    //     b=next;
    // }
    // return 0;

    //2
    // int n,a=0,b=1,next;
    // cout<<"enter the value of n:";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     cout<<a<<" ";
    //     next=a+b;
    //     a=b;
    //     b=next;
    // }
    // return 0;

    //3
    // int n,a=0,b=1,next;
    // cout<<"enter the number:";
    // cin>>n;
    
    // for(int i=1;i<=n;i++){
    //     cout<<a<<" ";
    //     next=a+b;
    //     a=b;
    //     b=next;
    // }
    // return 0;

    //4
    // int n,a=0,b=1,next;
    // cout<<"enter the number:";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     cout<<a<<" ";
    //     next=a+b;
    //     a=b;
    //     b=next;
    // }

    //5
    // int n,a=0,b=1,next;
    // cout<<"Enter the value on n:";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     cout<<a<< " ";
    //     next=a+b;
    //     a=b;
    //     b=next;
    // }
    // return 0;

    int n,a=0,b=1,next;
    cout<<"Enter the value:";
    cin>>n;

    int i=1;

    do{
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
        i++;
    }while(i<=n);
  return 0;
}

