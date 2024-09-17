#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 

    stringstream ss(str);
    string word;
    string largestWord;

    while (ss >> word) {
        if (word.length() > largestWord.length()) {
            largestWord = word; 
        }
    }
    cout << "The largest word is: " << largestWord << endl;
    return 0;
}
