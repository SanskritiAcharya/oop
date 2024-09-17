#include <iostream>
#include <string>
using namespace std;
string decimalToHexadecimal(int n) {
    string hex = "";
    char hexDigits[] = "0123456789ABCDEF";
    if (n == 0) {
        return "0";
    }
    while (n > 0) {
        int remainder = n % 16;
        hex = hexDigits[remainder] + hex;  
        n /= 16;
    }
    return hex;
}
int main() {
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;
    string hexadecimal = decimalToHexadecimal(decimal);
    cout << "The hexadecimal number is: " << hexadecimal << endl;
    return 0;
}
