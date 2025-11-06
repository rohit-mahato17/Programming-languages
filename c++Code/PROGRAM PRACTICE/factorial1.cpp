// factorial program 
#include<iostream>
using namespace std;
int factorial(int n){       
    if(n<=1){              //1(5<=1)  //2(4<=1)  //3(3-1) //4(2<=1)  //5(1<=1)condition true, return 1
        return 1;
    }
    return n * factorial(n-1); //1(5-1)=4  //2(4-1)=3  //3(3-1)=2  //4(2-1)=1
}
int main(){
  int n;
  cin>>n;
  cout<<" The factorial of "<<n<<" is "<<factorial(n);  //5 * 4 * 3 * 2 * 1=120 output
}