//Count vowels and Consonants
#include<iostream>
using namespace std;
int main(){

    string str="helloworld";
     int vovel=0;
     int consonant=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vovel++;
        }else{
            consonant++;
        }
    }
    
    cout<<"The value of vovel:"<<vovel<<endl;
    cout<<"The value of consonant:"<<consonant<<endl;

}