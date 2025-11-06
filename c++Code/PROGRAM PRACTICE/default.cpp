//wright the program to print defalut
#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}

float moneyreceived(int curentmoney,int factrol=1.1){
    return curentmoney*factrol;
}
int main(){
    int a,b;
    int money= 100000;
    cout<<"if you have"<<money<<"rs in your bank account,, you will recive "<<moneyreceived(money);
    cout<<"for VIP if you have"<<money<<"rs in your bank account,will recive"<<moneyreceived(money,1.1)<<"rs after 1 year";
    return 0;
}