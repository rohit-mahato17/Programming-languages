// //oops concept in c++
// #include <iostream>
// using namespace std;
// class car{
// public:    
//     string name;
//     int price;
//     int seats;
//     string type;
    
// };
// void print(car r){
//     cout<<r.name<<" "<<r.price<<" "<<r.seats<<" "<<r.type<<endl;
// }
// int main() {
//    car r1;
//    r1.name="knows";
//    r1.price=15000;
//    r1.seats=2;
//    r1.type="not";
   
//    car r2;
//    r2.name="kknows";
//    r2.price=115000;
//    r2.seats=22;
//    r2.type="nnot";
   
//     car r3;
//    r3.name="kkknows";
//    r3.price=1115000;
//    r3.seats=222;
//    r3.type="nnnot";
   
//    print(r1);
//    print(r2);
//    print(r3);
// }
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class car{
public:    
    string name;
    int price;
    int seats;
    string type;
    
};
void print(car r){
    cout<<r.name<<" "<<r.price<<" "<<r.seats<<" "<<r.type<<endl;
}
void change(car& r){
    r.name="golu";
}
int main() {
   car r1;
   r1.name="knows";
   r1.price=15000;
   r1.seats=2;
   r1.type="not";
   
   car r2;
   r2.name="kknows";
   r2.price=115000;
   r2.seats=22;
   r2.type="nnot";
   
    car r3;
   r3.name="kkknows";
   r3.price=1115000;
   r3.seats=222;
   r3.type="nnnot";
   
   print(r1);
   print(r2);
   change(r3);
   print(r3);
}
