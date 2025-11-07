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
    // Student s1("Rohit", 95000,55.2);
    // Student s2("Kholi",18000,48.8);

    int* ptr = new int(5245);    //no name only value using->new datatype(value);
    cout<<*ptr<<endl;
     
}

