#include<iostream>
using namespace std;
class Teacher{
private:
     double salary;
public:    
     //non-parameterized
    //   Teacher(){
    //     cout<<"hello lolo"<<endl;
    //   }

     //parameterized
      Teacher(string n,string d,string s,double sal){
            name=n;
            dept=d;
            subject=s;
            salary=sal;
      }
    string name;
    string dept;
    string subject;

    void changedept(string newdept){
        dept = newdept;
    }
void getinfo(){
     cout<<"name:"<<name<<endl;
     cout<<"subject:"<<subject<<endl<<endl;
}
    
};
int main(){
  Teacher t1("rohit","computer science","c++",25000);
  t1.getinfo();

  return 0; 
}  