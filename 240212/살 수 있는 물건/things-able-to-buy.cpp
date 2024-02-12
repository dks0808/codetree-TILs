#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    if(a>=3000)
    {
        cout << "book" << endl;
    }    
    else if(a>=1000)
    {
        cout << "mask" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    
    return 0;
}