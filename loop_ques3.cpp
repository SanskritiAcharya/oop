#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Number of terms: ";
    cin >> n;
    int sum=0;
    int a=1;
    cout << "Series: ";
    for(int i=1; i<=n; i++){
        sum+=a;
        cout << a << " ";
        a=a*10+1;
    }
    cout << "\nSum of series: " << sum << endl;
}