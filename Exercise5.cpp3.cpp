#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float weight, height,bmi;
    cout << "\n Enter your weight:";
    cin >> weight;
    cout << "\n Enter your height:";
    cin >> height;
    bmi=(weight / (pow(height, 2)));
    cout << "\n Your BMI is:" <<bmi;
    if (bmi < 18.5)
        cout << "\n Underweight :((";
    else if (bmi >= 18.5 && bmi <= 24.9)
        cout << "\n Normal :)";
    else if (bmi >= 25.0 && bmi <= 29.9)
        cout << "\n Overweight :(";
    else if (bmi >= 30)
        cout << "\n Obese :((";
    return 0;
}