#include <iostream>
using namespace std;
int main() {
    int lowerBound = 100;
    int upperBound = 200;
    int sum = 0;
    cout << "Numbers between 100 and 200, divisible by 9:" << endl;
    for (int i = lowerBound; i <= upperBound; ++i) {
        if (i % 9 == 0) {  
            cout << i << " ";
            sum += i;  
        }
    }
    cout << endl; 
    cout << "The sum: " << sum << endl;  
    return 0;
}
