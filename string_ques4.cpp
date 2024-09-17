#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        
        if (str[left] != str[right]) {
            return false; 
        }
        
        ++left;
        --right;
    }
    return true; 
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 
    string filteredStr;
    for (char ch : str) {
        if (ch != ' ') { 
            filteredStr += tolower(ch); 
        }
    }
    if (isPalindrome(filteredStr)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
