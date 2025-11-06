#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float gpa;
student(string s,int r,int g){   //pa constructor
    name=s;
    rno=r;
    gpa=g;
}

};
void print(student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}
int main(){
     student s1("gopal",78,6.6);
    // s1.rno=33;                        //changing the parameter number
     student s2("gopal2",99,3.3);
student s3=s1;     //copy constructor
  //s3.name="bock";
 
     print(s1);
     print(s2);
     print(s3);
}
