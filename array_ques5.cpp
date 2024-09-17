#include <iostream>
using namespace std;
void updateArray(int arr[], int size) {

    int* temp = new int[size];

    if (size < 2) {
        cout << "Array must have at least 2 elements." << endl;
        delete[] temp;
        return;
    }

    temp[0] = arr[1]; 

    for (int i = 1; i < size - 1; ++i) {
        temp[i] = arr[i - 1] * arr[i + 1];
    }

    temp[size - 1] = arr[size - 2]; 

    for (int i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }

    delete[] temp;
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
    updateArray(arr, size);

    cout << "Updated array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
