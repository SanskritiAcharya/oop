#include <iostream>
#include <unordered_set>
using namespace std;

int findFirstRepeating(int arr[], int size) {
    unordered_set<int> seen;
    for (int i = 0; i < size; ++i) {
        if (seen.find(arr[i]) != seen.end()) {
           
            return arr[i];
        } else {
            
            seen.insert(arr[i]);
        }
    }

    return -1;
}
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int firstRepeating = findFirstRepeating(arr, size);
    if (firstRepeating != -1) {
        cout << "The first repeating element is: " << firstRepeating << endl;
    } else {
        cout << "No repeating elements found." << endl;
    }
    delete[] arr;
    return 0;
}
