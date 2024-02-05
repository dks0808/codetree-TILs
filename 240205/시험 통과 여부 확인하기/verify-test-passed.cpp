#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int inumber;
    cin >> inumber;
    if(0 <= inumber <= 100)
    {
        if(inumber>=80)
        {
            cout << "pass"<<endl;
        }
        else
        {
            cout << 80- inumber << " more score" <<endl;
        }
    }
    return 0;
}