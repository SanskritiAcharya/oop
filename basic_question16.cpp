#include <iostream>
#include <string>
using namespace std;
string onesComplement(string binary) {
    for (int i = 0; i < binary.length(); i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }
    return binary;
}
int main() {
    string binary;
    cout << "Input an 8-bit binary value: ";
    cin >> binary;
    if (binary.length() != 8 || binary.find_first_not_of("01") != string::npos) {
        cout << "Invalid input! Please enter a valid 8-bit binary number." << endl;
        return 1;
    }
    cout << "The original binary = " << binary << endl;
    string onesComp = onesComplement(binary);
    cout << "After ones complement the number = " << onesComp << endl;
    return 0;
}
