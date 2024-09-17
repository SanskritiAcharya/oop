#include <iostream>
#include <limits> 
using namespace std;
void findLargestThree(int arr[], int size, int& first, int& second, int& third) {
    first = second = third = numeric_limits<int>::min();
    for (int i = 0; i < size; ++i) {
        if (arr[i] > first) {
            
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            
            third = arr[i];
        }
    }
}
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    if (size < 3) {
        cout << "Array must have at least 3 elements." << endl;
        return 1;
    }
    int* arr = new int[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int first, second, third;
    findLargestThree(arr, size, first, second, third);
    cout << "The largest three elements are: " << first << ", " << second << ", " << third << endl;
    delete[] arr;
    return 0;
}
