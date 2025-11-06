#include<iostream>
using namespace std;
class Teacher{
private:
     double salary;
public:    
      Teacher(){
        cout<<"hello lolo"<<endl;
      }
    string name;
    string dept;
    string subject;

    void changedept(string newdept){
        dept = newdept;
    }

    void setsalary(double s){
        salary=s;
    }
    double getsalary(){
        return salary;
    }
};
int main(){
  Teacher t1;
  Teacher t2;
  t1.name="rohit";
  t1.subject="oops";
 // t1.salary=25000;
 t1.setsalary(25000);
  
  cout<<t1.name<<endl;
  cout<<t1.subject<<endl;

  return 0; 
}  