// replace @ with space
#include<iostream>
using namespace std; 

void replaceCharacter(char ch[], int n) {
    int index = 0;

    while (ch[index] != '\0') {
        char curr = ch[index];

        if (curr == '@') {
            ch[index] = ' '; // Replace '@' with space
        }
        index++;
    } 
}

int main() {
    char ch[100];
    cin.getline(ch, 100); // Get the full line of input

    cout << "Before: " << ch << endl;

    replaceCharacter(ch, 100);

    cout << "After: " << ch << endl;

    return 0;
}
