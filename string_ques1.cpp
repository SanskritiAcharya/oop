#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "Enter any string: ";
    getline(cin,str);
    int length = str.length();
    for(int i=0; i<length/2; i++){
        char temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i]= temp;
    }
    cout << "Reversed string: " << str << endl;
}