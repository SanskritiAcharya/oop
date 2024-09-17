#include <iostream>
using namespace std;
int integerSquareRoot(int n) {
    if (n < 0) {
        return -1; 
    }
    if (n == 0 || n == 1) {
        return n; 
    }
    int low = 1, high = n, ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (mid * mid == n) {
            return mid;
        }
        if (mid * mid < n) {
            low = mid + 1;
            ans = mid; 
        } 
        else {
            high = mid - 1;
        }
    } 
    return ans; 
}
int main() {
    int num;
    cout << "Enter a non-negative number: ";
    cin >> num;
    int result = integerSquareRoot(num);
    if (result == -1) {
        cout << "Invalid input!" << endl;
    } else {
        cout << "Square root of " << num << " = " << result << endl;
    }
    return 0;
}
