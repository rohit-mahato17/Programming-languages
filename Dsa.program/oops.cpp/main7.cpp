//funtion inside class
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;

    // Constructor using 'this' to resolve ambiguity
    Student(string name, int marks) {
        this->name = name;     // 'this->name' refers to the member variable
        this->marks = marks;   // 'marks' is the constructor parameter
    }

    void display() {
        cout << "Name: " << name << ", Marks: " <<marks << endl;
    }
};
 
int main() {
    Student s("Rohit", 95);
    s.display();
    return 0;
}
