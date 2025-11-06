
#include<iostream>
#include<string>
using namespace std;

class student{
public:
    string name;
    string dept;
    string subject;
    string salary;
    //methods/member funtion

void changedept(string newdept)
    {
    dept=newdept;
    }

};
class account{    //Encapsulation method
 private:
        string password;
        double balance;//datd hiding   
 public:
       string accountId;
       string  username; 
};
void employee :: setData(int password1, int balance){
    string=password1;
    string=balance;
}

int main(){ 
    student  t1;
    t1.name="rohit";
    t1.dept="computer scince";
    t1.subject="BCA";
    t1.salary="25000"; 

    cout<<"student name is: "<<t1.name<<endl;
    cout<<"student dept are: "<<t1.dept<<endl;
    cout<<"student subject is: "<<t1.subject<<endl;
    cout<<"student colage fess: "<<t1.salary<<endl;
    account t2;
    t2.password="56567";
    t2.balance="1";
    t2.accountId="9087654y63281";
    t2.username="crore";

    cout<<"account password "<<t2.password<<endl;
    cout<<"accountaid is"<<t2.balance<<endl;
    cout<< t2.accountId<<endl;
    cout<<t2.username;
    return 0;

}