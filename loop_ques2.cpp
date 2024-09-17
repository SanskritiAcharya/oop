#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;
    for (int i = n - 1; i >= 2; --i) {
        if (isPrime(i)) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
