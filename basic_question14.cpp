#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter any integer: ";
    cin >> num;
    int n=num;
    int prod = 1;
    while(num>0){
        int ld = num%10;
        prod = prod*ld;
        num=num/10;
    }
    cout << "The product of the digits of " << n << " is " << prod << endl;
}