#include<iostream>
//#include<string>
using namespace std;

class student{
public:
    string name;
    string dept;
    string subject;
    string salary;
    //methods/member funtion

void changedept(string newdept)
    {
    dept=newdept;
    }

};

 
int main(){
    student  t1;
    t1.name="rohit";
    t1.dept="computer scince";
    t1.subject="BCA";
    t1.salary="25000";
    //different object
    // Teacher  t2;
    // Teacher  t3; 
    // Teacher  t4; 
    cout<<"student name is: "<<t1.name<<endl;
    cout<<"student dept are: "<<t1.dept<<endl;
    cout<<"student subject is: "<<t1.subject<<endl;
    cout<<"student colage fess: "<<t1.salary<<endl;
    return 0;

}