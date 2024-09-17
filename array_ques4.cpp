#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int size) {
    if (size == 0) {
        return 0; 
    }
    if (arr[0] > 0) {
        return 0;
    }
    for (int i = 1; i < size; ++i) {
   
        if (arr[i] - arr[i - 1] > 1) {
            return arr[i - 1] + 1; 
        }
    }
    return arr[size - 1] + 1;
}

int main() {
    int size;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int smallestMissing = findSmallestMissing(arr, size);

    cout << "The smallest missing element is: " << smallestMissing << endl;

    delete[] arr;
    return 0;
}
