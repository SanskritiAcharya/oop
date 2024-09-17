#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string& str, int left, int right) {
    if (left >= right) {
        return true;
    }
    if (str[left] != str[right]) {
        return false;
    }
    return isPalindrome(str, left + 1, right - 1);
}
int main() {
    string input;
    cout << "Enter a string to check if it is a palindrome: ";
    getline(cin, input);
    bool result = isPalindrome(input, 0, input.length() - 1);

    if (result) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
