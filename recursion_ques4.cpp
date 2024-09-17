#include <iostream>
using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base cases
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;

    cout << "Enter a non-negative integer to find the nth Fibonacci number: ";
    cin >> num;

    // Handle non-negative integers only
    if (num < 0) {
        cout << "Fibonacci number is not defined for negative integers." << endl;
        return 1;
    }

    int result = fibonacci(num);

    cout << "The Fibonacci number at position " << num << " is: " << result << endl;

    return 0;
}
