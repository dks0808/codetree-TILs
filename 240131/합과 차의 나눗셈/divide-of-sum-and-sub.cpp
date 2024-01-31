#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double c, d;
    c = a + b;
    d = a -b ;
    double e = c/d;
    
    cout << fixed << setprecision(2) << showpoint;
    cout << e;


    return 0;
}