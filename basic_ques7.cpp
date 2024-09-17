//For n = 10, write a C++ program that reads the integer n and prints its factorial.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any integer: ";
    cin >> n;
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    cout << "The factorial of " << n << " is " << fact << endl;
}