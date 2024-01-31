#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    int Area = n*n;
    if(n<5)
    {
        cout << Area << endl << "tiny";

    }
    else 
    {
        cout << Area;
    }
    return 0;
}