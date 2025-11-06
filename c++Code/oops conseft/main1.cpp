#include<iostream>
#include<list>
using namespace std;

class student{
public:
    string name;
    string course;
    int rollno;
    int age;
    list<string> choice;

};

int main()
{

  student stu1;

  stu1.name="rohit";
  stu1.course="Bca";
  stu1.rollno=23;
  stu1.age=20;
  stu1.choice={"c++ language 1","c++ languare 2","c++ language 3"};

  cout<<"name: "<<stu1.name<<endl;
  cout<<"course: "<<stu1.course<<endl;
  cout<<"rollno: "<<stu1.rollno<<endl;
  cout<<"age: "<<stu1.age<<endl;

  for(string code : stu1.choice){
    cout<<code<<endl;
  }


}