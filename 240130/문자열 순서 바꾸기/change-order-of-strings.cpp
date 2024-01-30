#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

int main() {
    string a, b;
    cin >> a >> b;
    string temp = a;
    a = b; 
    b = temp;
    cout <<a <<endl<<b;

    return 0;
}