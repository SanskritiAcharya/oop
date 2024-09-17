#include <iostream>
#include <unordered_set>
using namespace std;
void findTwoRepeating(int arr[], int size) {
    unordered_set<int> seen;
    unordered_set<int> repeated;
    for (int i = 0; i < size; ++i) {
        if (seen.find(arr[i]) != seen.end()) {
          
            repeated.insert(arr[i]);
        } else {
            seen.insert(arr[i]);
        }
    }

    if (repeated.size() == 2) {
        cout << "The two repeating elements are: ";
        for (int num : repeated) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "The number of repeating elements is not exactly two." << endl;
    }
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
    findTwoRepeating(arr, size);
    delete[] arr;
    return 0;
}
