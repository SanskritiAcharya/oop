#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Input a number: ";
    cin >> number;
    int reversed = 0;
    while (number != 0) {
        int digit = number % 10;  
        reversed = reversed * 10 + digit;  
        number /= 10;  
    }
    cout << "The number in reverse order is: " << reversed << endl;
    return 0;
}
