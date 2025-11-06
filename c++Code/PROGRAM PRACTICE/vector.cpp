#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>vec;
    vector<int>col={'a','b','c','d','e'};

    cout<<"size :"<<col.size()<<endl;//funtion call
        
     vec.push_back(25);
     vec.push_back(35);
     vec.push_back(45);   
     cout<<"push back size :"<<vec.size()<<endl;

    for(int val : vec){
        cout<<val<<endl;
    }
    return 0; 
}

   