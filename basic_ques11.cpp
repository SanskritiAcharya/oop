#include <iostream>
using namespace std;
bool isPowerOfThree(int n) {
    if (n < 1) return false;
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfThree(num)) {
        cout << num << " is a power of 3." << endl;
    } else {
        cout << num << " is not a power of 3." << endl;
    }
    return 0;
}
