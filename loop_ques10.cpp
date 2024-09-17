#include <iostream>
using namespace std;
int main() {
    int start, numTerms, diff;    
    cout << "Input the starting number of the A.P. series: ";
    cin >> start; 
    cout << "Input the number of items for the A.P. series: ";
    cin >> numTerms;
    cout << "Input the common difference of A.P. series: ";
    cin >> diff;    
    int sum = 0;
    int currentTerm = start;        
    cout << "The Sum of the A.P. series are : ";
    for (int i = 0; i < numTerms; ++i) {
        if (i > 0) cout << "+";
        cout << currentTerm;
        sum += currentTerm;
        currentTerm += diff;
    }    
    cout << "=" << sum << endl;    
    return 0;
}
