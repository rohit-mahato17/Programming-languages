//oops program 
#include<iostream>
using namespace std;

class student{
 public:   
    string name;
    int rollno;
    float gps;

   
  student (string s,int r,float g){//constructor
    name=s;
    rollno=r;
    gps=g;
      
   }
   student(int r,string s,float g){//multi constructor
    rollno=r;
    name=s;
    gps=g;
 }
  student(int r,float g){//multi constructor
  rollno=r;
  gps=g;
 }
};

  int main(){

    student s1("Rohit Mahato",46,8.2);
    student s2("rahul patal",77,8.9); 
    student s3(78,"harsh",8.0);
    student s4(77,8.5);
    student s6=s1; //Deep copy
    s6.name= "mahato";//paramiterise constructor
    cout<<s1.name<<endl<<s1.rollno<<endl<<s1.gps;
    cout<<s2.name<<endl<<s2.rollno<<endl<<s2.gps;
    cout<<s3.name<<endl<<s3.rollno<<endl<<s3.gps;
    cout<<s4.rollno<<endl<<s4.gps;
    cout<<s6.name<<endl<<s6.rollno<<endl<<s6.gps;
   
    return 0; 

} 