#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b;
    cout << "Enter the first number, a: ";
    cin >> a;
    cout << "Enter the second number, b: ";
    cin >> b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "After swapping the 1st number is: " << a << endl;
    cout << "After swapping the 2nd number is: " <<b << endl;
}

