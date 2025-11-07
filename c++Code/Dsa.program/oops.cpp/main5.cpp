#include <iostream>
using namespace std;

class student
{ // student is a new data type
public:
    string name;
    int rno;
    float gpa;
    //defaultconstructor;
      student(){

      }
    //constructor
    student (string n, int r, float g){
        name=n;
        rno=r;
        gpa=g;
    }
};
 
int main()
{
    student s1("student",75,8.5);
      
    student s2;
    s2.name="example";
    s2.rno=89;
    s2.gpa=0.9;

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
}
  