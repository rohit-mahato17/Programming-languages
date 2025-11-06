//parametrise constructer
#include<iostream>
using namespace std;
class A{
    private:
    int a;
    int b;
    public:
    A(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<" "<<b;
    }
};
int main(){
  A bo(10,20);
   bo.show();
}