#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int binaryToDecimal(string binary) {
    int decimal = 0;
    int length = binary.length();
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - i - 1);  
        }
    }
    return decimal;
}
int main() {
    string binary;
    cout << "Input a binary number: ";
    cin >> binary;
    if (binary.find_first_not_of("01") != string::npos) {
        cout << "Invalid input! Please enter a valid binary number." << endl;
        return 1;
    }
    int decimal = binaryToDecimal(binary);
    cout << "The decimal number: " << decimal << endl;

    return 0;
}
