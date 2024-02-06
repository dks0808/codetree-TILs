#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int score;
    cin >> score;
    if(score<100)
    {
        cout << "failure";
    }
    else if(score=100)
    {
        cout<< "pass";
    }
    return 0;
}