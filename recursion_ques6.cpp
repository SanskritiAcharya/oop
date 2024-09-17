#include <iostream>
using namespace std;
int sumEven(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (start % 2 == 0) {
        return start + sumEven(start + 2, end);
    }
    return sumEven(start + 1, end);
}
int sumOdd(int start, int end) {
    
    if (start > end) {
        return 0;
    } 
    if (start % 2 != 0) {
        return start + sumOdd(start + 2, end);
    } 
    return sumOdd(start + 1, end);
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
    int evenSum = sumEven(start, end);
    int oddSum = sumOdd(start, end);
    cout << "The sum of even numbers in the range [" << start << ", " << end << "] is: " << evenSum << endl;
    cout << "The sum of odd numbers in the range [" << start << ", " << end << "] is: " << oddSum << endl;

    return 0;
}
