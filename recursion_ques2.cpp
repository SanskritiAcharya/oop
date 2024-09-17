#include <iostream>
using namespace std;
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative integers." << endl;
        return 1;
    }
    int result = factorial(num);
    cout << "The factorial of " << num << " is: " << result << endl;
    return 0;
}
