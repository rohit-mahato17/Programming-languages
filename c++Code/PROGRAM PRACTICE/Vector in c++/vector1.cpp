//Vector Syntex

//-vector<int> vec
//-vector<int> vec = {1,2,3}
//-vector<int> vec(3,0)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={10,20,30,40,50};
    cout<<vec.size()<<endl;
    // vec.push_back(20);
    vec.pop_back();
    for(int val : vec){
        cout<<val<<endl;
    }
}
