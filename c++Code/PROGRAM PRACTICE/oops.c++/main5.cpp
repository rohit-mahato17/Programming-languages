//practice oops concupte;
#include<iostream>
using namespace std;
class student{
  public:
  string name;
  int rollno;
  int age;

  student(string s,int a,int r){
     name=s;
     age=r;
     rollno=a;
  }
   student(string s,int r){
     name=s;
     age=r;
  }
  
};
void print(student s){
    cout<<s.name<<" "<<s.age<<" "<<s.rollno<<endl;
}
int main(){

    student s1("opps",19,32);
//   student s1;
//   s1.name="opps";
//   s1.rollno=32;
//   s1.age=19;

     student s2("opps",32);
  print(s1);
  print(s2);

}

