#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 
    bool capitalize = true; 
    for (char &ch : str) { 
        if (ch == ' ') {
            capitalize = true;
        } else if (capitalize) {
            if (ch >= 'a' && ch <= 'z') {
                ch -= 'a' - 'A'; 
            }
            capitalize = false; 
        }
    }
    cout << "Capitalized string: " << str << endl;
    return 0;
}
