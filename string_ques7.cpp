#include <iostream>
#include <string>
using namespace std;
string removeCharacter(const string& str, char ch) {
    string result;

    for (char c : str) {
        if (c != ch) {
            result += c; 
        }
    }
    return result;
}
int main() {
    string str;
    char ch;
    cout << "Enter the string: ";
    getline(cin, str); 
    cout << "Enter the character to remove: ";
    cin >> ch;
    string updatedStr = removeCharacter(str, ch);
    cout << "Updated string: " << updatedStr << endl;
    return 0;
}
