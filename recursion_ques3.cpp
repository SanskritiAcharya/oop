#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int num;
    cout << "Enter a non-negative integer to find the nth Fibonacci number: ";
    cin >> num;
    if (num < 0) {
        cout << "Fibonacci number is not defined for negative integers." << endl;
        return 1;
    }
    int result = fibonacci(num);
    cout << "The Fibonacci number at position " << num << " is: " << result << endl;
    return 0;
}
