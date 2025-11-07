//this keyword
#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int mark;

    // Constructor using the 'this' pointer to refer to class members
    student(string name, int mark) {
        this->name = name;
        this->mark = mark;
    }
};

int main()
{
    student s1("student", 100);
    student s2("master", 100);

    cout << s1.name << " " << s1.mark << endl;
    cout << s2.name << " " << s2.mark << endl;

    return 0;
}
