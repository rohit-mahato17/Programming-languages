//object pointer
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int run;
    float avg;

    // Constructor
    Student(string name, int run,float avg) {
        this->name = name;     
        this->run = run;   
        this->avg = avg;   
    }

};
void change(Student* s){
    //(*c).avg=69.9;
    s->avg=69.9;
}
 
int main() {
    Student s1("Rohit", 95000,55.2);
    cout<<s1.avg<<endl;
    change(&s1);
    cout<<s1.avg<<endl;

    // Student s2("Kholi",18000,48.8);
     
    // Student* p1 = &s1;
    // cout<<(*p1).run<<endl; 
    // //change
    // (*p1).avg = 77.5;
    // cout<<s1.avg<<endl;
}
