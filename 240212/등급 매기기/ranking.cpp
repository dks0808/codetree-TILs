#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    if(a >=90)
    {
        cout << 'A'
    }
    if(a >=80)
    {
        cout << 'B'
    }
    if(a >=70)
    {
        cout << 'C'
    }
    if(a >=60)
    {
        cout << 'D'
    }
    if(a < 60)
    {
        cout << 'F'
    }
    return 0;
}