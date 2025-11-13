// Sum of All Elements
#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int> arr={1,4,2,9,14,6};
      int sumofall=0;
     for(int i=0;i<arr.size();i++){
          sumofall += arr[i];
     }
     cout<<"The sum of All is: "<<sumofall;
}