//oops object pointer
#include<iostream>
using namespace std;

class cricketer{
  public:
  string name;
  int runs;
  
  cricketer(string name,int runs){
     this->name=name;
     this->runs=runs;
  }

 };

 int main(){
    cricketer c1("rohit sharama",20000);
    cricketer c2("virat kohli",25000);

    cricketer* p1 = &c1;
    cricketer* p2 = &c2;
    
    cout<<(*p1).name<<" ";
    cout<<(*p1).runs<<" "<<endl; 
    cout<<(*p2).name<<" ";
    cout<<(*p2).runs<<" ";
    

    return 0;

 }    