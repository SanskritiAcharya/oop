#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int fd, ld;
    int sum=0;
    for(int i=num1; i<=num2; i++){
        fd = i%10;
        ld = i/10;
        sum+=fd+ld;
    }
    cout << "Sum= " << sum << endl;
    return 0;
}