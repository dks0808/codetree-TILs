#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    float a;
    cin >> a;
    if(a>=1.0)
    {
        cout<<"High";
    }
    else if(1.0> a >=0.5)
    {
        cout <<"Middle";
    }
    else
    {
        cout <<"Low";
    }

    return 0;
}