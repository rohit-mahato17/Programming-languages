#include<iostream>
using namespace std;
class student{//student is a new data type
public:
       string name;
       int rno;
       float gpa;

};
int main(){
    student s1;//object
    s1.name="Rohit mahato";
    s1.rno=46;
    s1.gpa=8.2;

    cout<<"the name is "<<s1.name<<endl;
    cout<<"The rno is "<<s1.rno<<endl;
    cout<<"the gpa is "<<s1.gpa<<endl;

    return 0;

}