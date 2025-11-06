#include<iostream>
using namespace std;

void forname(string name, string city,int age ){
    cout<<"my name is "<<name<<endl;
    cout<<"I am from "<<city<<endl;
   // if(age!=0){
    cout<<"I am "<<age<<" year old"<<endl;
   // }
}
int main(){
   // forname("rohit","odisha",0);
   int age;
    string name,city;
    cout<<"name"<<endl;
    cin>>name;
    cout<<"city"<<endl;
    cin>>city;
    cout<<"age";
    cin>>age;

    
    return 0;
}