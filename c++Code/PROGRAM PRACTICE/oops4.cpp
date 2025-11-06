#include<iostream>
using namespace std;

class fruits{
    public:
           string name;
           string color;
};

int main() {
    fruits apple; //object
    apple.name = "apple";
    apple.color = "red";
    
    cout << apple.name << "-";
    cout << apple.color << endl;
      
       fruits mango;
       mango.name="mango";
       mango.color="yello";
    cout<<mango.name<<"-"<<mango.color<<endl;
    return 0;   
}
