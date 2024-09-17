#include <iostream>
#include <limits> 
using namespace std;
int findSecondLargest(int arr[], int size) {
    if (size < 2) { 
        cout << "Array must have at least 2 elements." << endl;
        return numeric_limits<int>::min(); 
    }
    int first = numeric_limits<int>::min();
    int second = numeric_limits<int>::min(); 

    for (int i = 0; i < size; ++i) {
        if (arr[i] > first) {
          
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
           
            second = arr[i];
        }
    }
    if (second == numeric_limits<int>::min()) {
        cout << "There is no second largest element in the array." << endl;
        return numeric_limits<int>::min(); 
    }
    return second;
}
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    if (size < 2) {
        cout << "Array must have at least 2 elements." << endl;
        return 1;
    }
    int* arr = new int[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int secondLargest = findSecondLargest(arr, size);
    if (secondLargest != numeric_limits<int>::min()) {
        cout << "The second largest element is: " << secondLargest << endl;
    }
    delete[] arr;
    return 0;
}
