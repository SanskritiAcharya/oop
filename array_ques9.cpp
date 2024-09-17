#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
string findThirdLargestString(vector<string>& strings) {
    sort(strings.begin(), strings.end(), greater<string>());
    if (strings.size() < 3) {
        return "Not enough strings";
    }
    int count = 1; 
    string thirdLargest;
    for (size_t i = 1; i < strings.size(); ++i) {
        if (strings[i] != strings[i - 1]) {
            ++count;
            if (count == 3) {
                thirdLargest = strings[i];
                break;
            }
        }
    }
    if (count < 3) {
        return "Not enough unique strings";
    }
    return thirdLargest;
}
int main() {
    int size;
    cout << "Enter the number of strings: ";
    cin >> size;
    cin.ignore(); 
    vector<string> strings(size);
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < size; ++i) {
        getline(cin, strings[i]);
    }
    string thirdLargest = findThirdLargestString(strings);
    cout << "The third largest string is: " << thirdLargest << endl;
    return 0;
}
