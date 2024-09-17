#include <iostream>
#include <string>
using namespace std;
string decimalToBinary(int n) {
    string binary = "";
    if (n == 0) {
        return "0";
    }
    while (n > 0) {
        binary = to_string(n % 2) + binary;  
        n /= 2;  
    }
    return binary;
}
int main() {
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;
    string binary = decimalToBinary(decimal);
    cout << "The binary number is: " << binary << endl;
    return 0;
}
