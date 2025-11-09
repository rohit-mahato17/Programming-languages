#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={12,13,14,15,16,17};
     vec.push_back(18);
     vec.pop_back();
     vec.front()=100;
     vec.back()=200;
     vec.at(3)=300;
    for(int i=0;i < vec.size();i++){
        cout<<vec[i]<<endl;
    }
    return 0;
}
