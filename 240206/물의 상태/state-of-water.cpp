#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int temperature;
    cin >> temperature;
    if(temperature<0)
    {
        cout << "ice";

    }
    else if(temperature>=100)
    {
        cout <<"vaper";
    }
    else 
    {
        cout << "water"
    }
    return 0;
}