#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Input number of terms to display: ";
    cin >> n;
    if (n <= 0) {
        cout << "Number of terms must be positive." << endl;
        return 1;
    }
    int a = 0, b = 1;
    cout << "Here is the Fibonacci series up to " << n << " terms: ";
    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        int c = a + b; 
        a = b;           
        b = c;        
    }
    cout << endl;
    return 0;
}
