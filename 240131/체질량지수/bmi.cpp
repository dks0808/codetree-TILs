#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
    float hight, weight;
    cin >> hight >> weight;
    hight /= 100;
    float BMI = weight/(hight*hight);

    if(BMI>=25)
    {
        
        cout << static_cast<int>(BMI)<< endl<< "Obesity" ;

    }
    else
    {
        cout << static_cast<int>(BMI);
    }
    

    return 0;
}