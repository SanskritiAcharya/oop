#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName;
    cout << "Enter first name: ";
    cin >> firstName;
    string lastName;
    cout << "Enter last name: ";
    cin >> lastName;
    string reverseName = lastName + " " + firstName;
    cout << "Name in reverse is: " << reverseName << endl;
}