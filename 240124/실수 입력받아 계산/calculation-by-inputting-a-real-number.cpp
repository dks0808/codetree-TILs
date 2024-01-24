#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a, b;
    cin >> a;
    cin >>b;
    float c = a + b;
   
    cout << fixed<< setprecision(2) << c <<endl;


    return 0;
}