// #include<iostream>
// using namespace std;
// int main(){
//      int x;
//      cin>>x;
//     int i=1;
//     while(i<=10){
//     cout<<x<<"*"<<i<<"="<<i*x<<endl; 
//     i++;
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the n term :";
//     cin>>n;
//     for(int i=4;i<=3*n-1;i=i+3){
//         cout<<i;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=20;i++){
//         if(i==2){              //if(i==2 || i==) continue;
//            continue;
//         }
//         if(i==12){
//             continue;
//         }
//         cout<<i<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=10){
//         cout<<"om om om omm "<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     while(a<b){
//         cout<<"malayalam is a palindrome"<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     do{
//         cout<<i<<endl;
//          i++;
//     }while(i<=10);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     while(i=10){
//         cout<<i<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=4,y=0;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y){
//         continue;
//         }
//     else{
//         cout<<x<<" "<<y<<endl;
//     }
    
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
//     int count=0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     cout<<count;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     a=20;
//     b=10;
//     int sum;

//     sum=a+b;
//     cout<<sum;
// }
    
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the n terms";
//     cin>>n;
     
//      int i=1;
//      while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<j;
//            // cout<<(char)(j+64)<<" ";//i
//             j++;
//         }
//         cout<<endl;
//         i++;
//      }
// }

// #include <iostream>

// int main() {
//     int i = 1; // Row counter

//     while (i <= 5) { // Loop through 5 rows
//         if (i % 2 != 0) { // Odd rows: 1, 3, 5 (numbers)
//             for (int j = 1; j <= i; ++j) {
//                 std::cout << j; // Print numbers
//             }
//         } else { // Even rows: 2, 4 (letters)
//             for (char ch = 'A'; ch < 'A' + i; ++ch) {
//                 std::cout << ch; // Print letters
//             }
//         }
//         std::cout << std::endl; // Move to the next line after each row
//         ++i; // Increment the row counter
//     }

//     return 0;
// }  

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the n terms";
//     cin>>n;
     
//      int i=1;
//      while(i<=n){
//         int j=1;
//         while(j-i+1<=n){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//      }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=12;
//     int*ptr=&x;
//     cout<<&x<<endl;
//     *ptr=23;
//     cout<<*ptr<<endl;
//     cout<<x;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10,b=20;
//     int sum=a+b;
//     cout<<sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=4;
//     int area=a*a;
//     cout<<area;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number : ";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//          cout<<i+i;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the n value";
//     cin>>n;
//     //  for(int i=1;i<=n;i++){
//     //     for(int j=1;j<=n-i;j++){
//     //         cout<<" ";
//     //     }
//     //     for(int j=1;j<=i;j++){
//     //         cout<<"*";
//     //     }
//     //     for(int j=1;j<=i-1;j++){
//     //         cout<<"*";
//     //     }

//     //     cout<<endl;
//     //  }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i-1;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=n-i+1;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//      for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//      }
//      return 0;
// }

// #include<iostream>
// using namespace std;
// void met(){
//     cout<<"hello funtion";
// void bom(){
//     cout<<"hello main";
//     met();
// }    
// }
// int main(){
//     bom();
// }

//funtion printing hello
// #include<iostream>
// using namespace std;
// int printhello(int i,int n){
//     while(i<=n){
//         cout<<"hello"<<endl;
//         i++;
//     }
// }
// int main(){
//     int i=1;
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//  printhello(i,n);
//  //return 0;
// }

//funtion printing hello (for loop condition)
// #include<iostream>
// using namespace std;
// int printhello(int n){
//     for(int i=1;i<=n;i++){
//         cout<<"hello funtion\n";
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//  printhello(n);
//  //return 0;
// }

// #include<iostream>
// using namespace std;
// int printhello(int n){
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//  printhello(n);
//  //return 0;
// }
//sum of the number
// #include<iostream>
// using namespace std;
// int add(int a,int b){
//     int sum=a+b;
//     return sum;
// }
// int main(){
//    // int a=100;
//     //int b=200;
//     cout<<"the value is :"<<add(100,200);
// }

//speed and time
// #include<iostream>
// using namespace std;
// int main(){
//     int di=20;
//     int ti=2;
//     int s=di/ti;
//     cout<<"The speed is :"<<s;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=5;
//     while(i>0){
//         cout<<"hello l"<<endl;
//         i=i-1;
//     }
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int i=1;
//   int ans=1;
//   while(i<=n){
//     ans=ans*i;
//      i++;
//   }
//   cout<<ans;
//   return 0;
// }
  
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int i=n;
//   while(i>=1){
//     cout<<i;
//     i--;
//   }
// }
// print 1 to n only even number
// #include<iostream>
// using namespace std;
// int main(){
//   int n=10;
//   for(int i=1;i<=n;i++){
//     if(i%2==0){
//       cout<<i<<" ";
//     }
//   }
// }

//table 1 to 10
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter the number :";
//   cin>>n;
//     for(int i=1;i<=n;i++){
//        for(int j=1;j<=n;j++){
//         cout<<i<<"*"<<j<<"="<<i*j<<endl;
//        }
//        cout<<endl;
//     }
//     return 0;
// }
//  
// print decimal to binary
// #include<iostream>
// using namespace std;
// int main(){
//     int decnum;
//     cin>>decnum;
//     while(decnum>0){
//         int rem=decnum%2;
//         cout<<rem<<endl;
//         decnum=decnum/2;
//     }
// }       

// #include<iostream>
// using namespace std;
// printarray(int time[][5],int row,int col){
//     for(int i=0 ; i<row ; i++ ){
//         for(int j=0;j<col;j++){
//             cout<<time[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int time[4][5]={
//     {10,20,30,40,50},
//     {60,70,80,90,11},
//     {12,13,14,15,16},
//     {13,14,13,15,16}

//     };
//     int row=4;
//     int col=5;
//     printarray(time,row,col);
// }

// #include<iostream>
// using namespace std;
// bool printlinear(int brt[7],int size){
//     int target=70;
//     for(int i=0;i<size;i++){
//         if(brt[i]==target){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int brt[]={10,20,30,50,60,70,80};
//     int size=7;
//     if(printlinear(brt,size)){
//         cout<<"target foung";
//     }
//     else{ 
//         cout<<"targe not found";
//     } 
//     return 0;
// }


#include<iostream>
using namespace std;
void reversearray(int arr[],int size){
       int left=0;
       int right=size-1;
       while(left<right){
        swap(arr[left],arr[right]);
            left++;
            right--;
        }
    // for(int left=0,right=size-1;left<=right;left++,right--){
    //     swap(arr[left],arr[right]);
    // }
        //print the array
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={10,20,30,40,50,60};
    int size=6;
    reversearray(arr,size);
}
//output:60 50 40 30 20 10
