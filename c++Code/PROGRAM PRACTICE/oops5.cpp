
#include<iostream>
//#include<string>
using namespace std;

class Teacher{
    private:
  double salary;  
public:
    string name;
    string dept;
    string subject;
    
    //methods/member funtion

void changedept(string newdept)
    {
    dept=newdept;
    }
    void setsalary(double s){
        salary=s;
    }
    double getsalary(){
        return salary;
    }

};


int main(){
    Teacher  t1;//constructor call
    t1.name="rohit";
    t1.dept="computer scince";
    t1.subject="BCA";
    t1.setsalary(55000);
    
    cout<<"teacher name is: "<<t1.name<<endl;
    cout<<"teacher dept are: "<<t1.dept<<endl;
    cout<<"teacher subject is: "<<t1.subject<<endl;
    cout<<"teacher colage fess: "<<t1.getsalary()<<endl;
    return 0;

}