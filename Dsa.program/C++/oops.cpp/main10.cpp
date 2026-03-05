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
 
int main() {
    Student s1("Rohit", 95000,55.2);
    Student* s2=new Student("Kholi",18000,48.8);
    
    cout<<(*s2).name<<" "<<s2->run<<endl;    //tow type declaration essay -> this
}

