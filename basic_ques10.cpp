#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any integer: ";
    cin >> n;
    while(n>=10){
        int sum=0;
        while(n>0){
        int ld = n%10;
        sum+=ld;
        n=n/10;
    }
    n = sum;
    }
    cout << "The resulting number is : " << n << endl;
}