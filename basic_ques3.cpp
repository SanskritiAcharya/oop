#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, fd, ld, swappedNum, temp, count = 0;
    cout << "Enter any number: ";
    cin >> num;
    ld = num % 10;
    temp = num;
    while(temp >= 10) {
        temp=temp/10;  
        count++;     
    } 
    fd = temp;  
    int divisor = pow(10, count);  
    int middlePart = (num % divisor) / 10;
    swappedNum = ld * divisor + middlePart * 10 + fd;
    cout << "The number after swapping the first and last digits is: " << swappedNum << endl;
    return 0;
}

