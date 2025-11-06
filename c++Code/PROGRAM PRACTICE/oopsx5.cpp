//oops object pointer
#include<iostream>
using namespace std;

class cricketer {
  public:
    string name;
    int runs;
    float avg;

    cricketer(string name, int runs, float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};

int main() {
    cricketer c1("Rohit Sharma", 20000, 50.0);
    cricketer c2("Virat Kohli", 25000, 55.0);

    cricketer* p1 = &c1;

    cout << (*p1).runs << endl;
    (*p1).avg = 77.5;
    cout << c1.avg;
    return 0;
} 
