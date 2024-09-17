#include <iostream>
#include <string>
using namespace std;
string onesComplement(string binary) {
    for (int i = 0; i < binary.length(); i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }
    return binary;
}
string twosComplement(string binary) {
    string onesComp = onesComplement(binary);
    int carry = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (onesComp[i] == '1' && carry == 1) {
            onesComp[i] = '0';  
        } else if (onesComp[i] == '0' && carry == 1) {
            onesComp[i] = '1';  
            carry = 0;        
        }
    }
    return onesComp;
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
    cout << "After ones complement the value = " << onesComp << endl;
    string twosComp = twosComplement(binary);
    cout << "After twos complement the value = " << twosComp << endl;
    return 0;
}
