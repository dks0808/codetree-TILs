#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a;
    double b;
    char c;
    cin >> c;
    cin >> a;
    cin >> b ;
    
    cout <<fixed << setprecision(2) << showpoint;

    cout << c << endl << a << endl << b;
    return 0;
}