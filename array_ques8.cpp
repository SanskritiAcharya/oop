#include <iostream>
#include <climits> 
using namespace std;

void findSecondLowestAndHighest(int arr[], int size, int &secondLowest, int &secondHighest) {
    if (size < 2) {
        cout << "Array must have at least 2 elements." << endl;
        return;
    }

    int lowest = INT_MAX;
    int secondLow = INT_MAX;
    int highest = INT_MIN;
    int secondHigh = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < lowest) {
 
            secondLow = lowest;
            lowest = arr[i];
        } else if (arr[i] < secondLow && arr[i] != lowest) {
            
            secondLow = arr[i];
        }
        if (arr[i] > highest) {
           
            secondHigh = highest;
            highest = arr[i];
        } else if (arr[i] > secondHigh && arr[i] != highest) {
           
            secondHigh = arr[i];
        }
    }

    secondLowest = (secondLow == INT_MAX) ? -1 : secondLow;
    secondHighest = (secondHigh == INT_MIN) ? -1 : secondHigh;
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
    int secondLowest, secondHighest;
    findSecondLowestAndHighest(arr, size, secondLowest, secondHighest);
    if (secondLowest != -1) {
        cout << "The second lowest number is: " << secondLowest << endl;
    } else {
        cout << "There is no second lowest number." << endl;
    }

    if (secondHighest != -1) {
        cout << "The second highest number is: " << secondHighest << endl;
    } else {
        cout << "There is no second highest number." << endl;
    }
    delete[] arr;
    return 0;
}

