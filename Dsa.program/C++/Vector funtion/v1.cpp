// vector funtion

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    cout<<"the size of vec: "<<vec.size() <<endl;
                  
    vec.push_back(757);
    vec.push_back(75);
    vec.push_back(57);
    vec.push_back(775);
    vec.push_back(7); 

    // vec.pop_back();

    cout<<"the size of vec: "<<vec.size() <<endl;

    cout<< vec.back() <<endl;
    cout<< vec.front() <<endl;
    // cout<< vec.at(7) <<endl;

    return 0;
}