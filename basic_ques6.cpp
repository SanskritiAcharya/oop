#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter any two integers: ";
    cin >> num1 >> num2;
    int sum=num1+num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    int count=0;
    while(sum>0){
        sum=sum/10;
        count++;
    }
    cout << "The number of digits in the sum value is " << count << endl;
    return 0;
}
