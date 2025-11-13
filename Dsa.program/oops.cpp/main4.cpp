#include <iostream>
using namespace std;

class student
{ // student is a new data type
public:
    string name;
    int rno;
    float gpa;
};
void print(student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}
void change(student &s){
    s.name = "roket";
}
int main()
{
    student s1;
    s1.name = "gkbol";
    s1.rno = 54;
    s1.gpa = 8.2;
    // cout<<s.name<<endl<<s.rno<<endl<<s.gpa<<endl;
 
    print(s1);
    change(s1);
    print(s1); //pass by value   //& pass by reference
}
  