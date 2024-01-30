#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    a += 8;
    b *= 3;
    int c = a*b;
    cout << a << endl << b << endl << c;
    return 0;
}