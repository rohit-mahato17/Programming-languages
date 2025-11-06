//wright a program encapsulation

#include<iostream>
using namespace std;
class encap{
private:
      int age;
public:
     string name;      

     void setvalue(int a){
        age = a;
        cout<<age<<endl;
     }
};

int main(){

encap e1;
    e1.name = "Akhil";
    e1.setvalue(23);
    cout<<e1.name;
}