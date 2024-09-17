#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Number of terms: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    int a = 0; 
    int b = 1; 
    cout << "Here is the Fibonacci series up to " << n << " terms: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int c = a + b; 
        a = b;       
        b = c;        
    }
    cout << endl;
    return 0;
}
