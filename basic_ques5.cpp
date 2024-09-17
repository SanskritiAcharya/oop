#include <iostream>
using namespace std;
int main() {
    int numbers[50];
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Element " << i << " : ";
        cin >> numbers[i];
    }
    int first=0;
    int second=0;
    int third=0;
    for (int i = 0; i < n; i++) {
        if (numbers[i] > first) {
            third = second;
            second = first;
            first = numbers[i];
        } else if (numbers[i] > second) {
            third = second;
            second = numbers[i];
        } else if (numbers[i] > third) {
            third = numbers[i];
        }
    }
    cout << "The three highest numbers are: " << first << " " << second << " " << third << endl;
    return 0;
}
