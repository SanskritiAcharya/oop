#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; 
    }
    return true;
}
int countPrimes(int n) {
    int primeCount = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            primeCount++;
        }
    }
    return primeCount;
}
int main() {
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    int result = countPrimes(num);
    cout << "Number of prime numbers less than " << num << " is " << result << endl;
    return 0;
}
