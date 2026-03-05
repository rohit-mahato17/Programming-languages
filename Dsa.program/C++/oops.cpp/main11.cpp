#include<iostream>
using namespace std;

class Student {
    public:
        string name;
        int rollno;

        Student(string n, int r, float c) {
            name = n;
            rollno = r;
            cgpa = c;
        }

        float getcgpa() {
            return cgpa;
        }

        void setcgpa(float c) {
            cgpa = c;
        }

    private:
        float cgpa;
};

int main() {
    Student s1("gk question", 6, 8.8);
    // s1.cgpa = 8.9; // ❌ Can't access private member directly
    cout << s1.getcgpa() << endl;  // ✅ Use getter
    return 0;
}
