#include<iostream>
using namespace std;
 
 class vactor{
    public:
    int size;
    int capacity;
    int* arr;

    vactor(){   //constructor
        size=0;
        capacity=1;
        arr=new int[1];
    }
    
     void add(int ele){       //funtion
            if(size==capacity){
                capacity *=2;
                int* arr2 =new int[capacity];
                for(int i=0;i<size;i++){
                    arr2[i]=arr[i];
                }
                arr=arr2;
            }
            arr[size++] = ele;
     }
     void print(){   //funtion

        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }
 };
int main(){
    vactor v;

    v.add(10);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(15);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(7);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    return 0;
}