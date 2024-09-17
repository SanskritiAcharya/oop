#include <iostream>
#include <string>
using namespace std;

const string units[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
const string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
const string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

string numberToWords(int num) {
    if (num < 10) {
        return units[num];
    } else if (num < 20) {
        return teens[num - 10];
    } else {
        int tenPart = num / 10;
        int unitPart = num % 10;
        if (unitPart == 0) {
            return tens[tenPart];
        } else {
            return tens[tenPart] + " " + units[unitPart];
        }
    }
}

int main() {
    int num;
    cout << "Enter a non-negative integer (0-99): ";
    cin >> num;

    if (num < 0 || num > 99) {
        cout << "Number out of range. Please enter a number between 0 and 99." << endl;
    } else {
        cout << "Number in words: " << numberToWords(num) << endl;
    }

    return 0;
}
