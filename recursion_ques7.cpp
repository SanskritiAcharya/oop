#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int sumPrimes(int start, int end) {
  
    if (start > end) {
        return 0;
    }
   
    if (isPrime(start)) {
        return start + sumPrimes(start + 1, end);
    }
  
    return sumPrimes(start + 1, end);
}
int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    if (start > end) {
        cout << "Invalid range. Start should be less than or equal to end." << endl;
        return 1;
    }
    int primeSum = sumPrimes(start, end);
    cout << "The sum of all prime numbers in the range [" << start << ", " << end << "] is: " << primeSum << endl;
    return 0;
}
