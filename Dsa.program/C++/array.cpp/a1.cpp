// Traversal (Array में elements को access करना)
// Traversal का मतलब है array के हर element को एक-एक करके देखना या process करना।

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 20, 30, 40};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Array element: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

//Insertion (Array में नया element डालना)

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40,50};
//     int n=sizeof(arr)/sizeof(arr[0]);
//      int pos=2;
//      int value=99;
//      cout<<"Not Insertion"<<endl;
//      for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;
//      arr[pos]=value;
//      cout<<"Insertion"<<endl;

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

//delation code
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    int pos=2;

    for(int i=pos; i< n-1; i++){
        arr[i]=arr[i+1];
    }
    n--;

    cout<<"after delation: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
