//what are constructors and class method?
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    int salary;

    // Parameterized Constructor
    Student(string n, int a , int s) {
        name = n;
        age = a;
        salary = s;
    }

    void display() {
        cout << "Name: " << name <<endl << "Age: " << age << endl<<"salary:"<< salary<<endl;
    }
};

int main() {
    Student stu1("rohit",20,25);  // Passing values to constructor
    stu1.display();
    // cout<<"Name: "<<stu1.name;
    return 0;
}
