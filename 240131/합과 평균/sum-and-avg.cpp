#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double sum = a+b;
    float mean = sum/2;
    
    cout << fixed<< setprecision(1) << showpoint;

    cout << static_cast<int>(sum) << ' ' << mean;

    
    return 0;
}