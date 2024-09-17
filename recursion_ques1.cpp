#include <iostream>
using namespace std;
int sumArray(const int arr[], int size) {   
    if (size <= 0) {
        return 0;
    }   
    return arr[size - 1] + sumArray(arr, size - 1);
}
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    if (size <= 0) {
        cout << "Array size must be positive." << endl;
        return 1;
    }
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int totalSum = sumArray(arr, size);
    cout << "The sum of all elements in the array is: " << totalSum << endl;
    return 0;
}
