#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >>a ;
    if(-1000<=a<=1000)
    {
        if(a>112)
        {
            cout << 1;
        }
        else if( a <= 112)
        {
            cout <<0;
        }
    }
    return 0;
}