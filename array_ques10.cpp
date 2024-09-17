#include <iostream>
#include <vector>
using namespace std;

int findFirstOccurrence(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int result = -1; 
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1; 
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int findLastOccurrence(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int result = -1; 
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1; 
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int countOccurrences(const vector<int>& arr, int target) {
    int firstIndex = findFirstOccurrence(arr, target);
    if (firstIndex == -1) {
        return 0; 
    }
    int lastIndex = findLastOccurrence(arr, target);
    return lastIndex - firstIndex + 1;
}
int main() {
    int size, target;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the sorted elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the number to count occurrences of: ";
    cin >> target;
    int count = countOccurrences(arr, target);
    cout << "The number " << target << " occurs " << count << " times in the array." << endl;
    return 0;
}
