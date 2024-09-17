#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
vector<int> findKLargestElements(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(arr[i]);
    }
    return result;
}
int main() {
    int size, k;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    if (k > size) {
        cout << "k cannot be greater than the number of elements in the array." << endl;
        return 1;
    }

    vector<int> kLargest = findKLargestElements(arr, k);

    cout << "The " << k << " largest elements are: ";
    for (int num : kLargest) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
