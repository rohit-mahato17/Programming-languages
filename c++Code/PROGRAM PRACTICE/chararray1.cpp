#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"enterrr the value :";
    //cin>>ch;
    cin.getline(ch,100);
    
    cout<<"the value is :"<<ch;
    // for(int i=0;i<10;i++){
    //     cout<<i<<"="<<ch[i]<<" "<<endl;
    // }

    return 0;
}

// #include<iostream>
// using namespace std;
// int print(char ch[],int size){
//     int length=0;
//     for(int i=0;i<size;i++){
//         if(ch[i]=='\0'){
//             break;
//         }else{
//             length++;
//         }
//     }
//     cout<<length;
// }
// int main(){
//     char ch[100];
//     cin>>ch;
//     int size=100;
//    int game= print(ch,size);
//}

// #include<iostream>
// using namespace std;
// int print(char ch[],int size){
//      int i=0;
//      int j=6-1;
//      while(i<j){
//         swap(ch[i],ch[j]);
//             i++;
//      }
//      cout<<ch[i];

// } 
// int main(){
//     char ch[100];
//     cin>>ch;
//     print(ch,100);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char n;
//     cin>>n;
//     cout<<n;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string name;
//     cin>>name;
//     cout<<"print string :"<<name.length()<<endl;
//     cout<<"string is empty or  not:"<<name.empty()<<endl;
// }