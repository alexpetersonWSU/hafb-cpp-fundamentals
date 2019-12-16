#include <iostream>
using namespace std;

int main()
{
    //calculate BMI: weight(kg)/[height(m)]^2
    float weight = 0, height = 0, bmi = 0;

    cout << "Please enter your weight: ";
    cin >> weight;

    cout << "Please enter your height: ";
    cin >> height;

    bmi = weight / (height * height);
    cout << "Your BMI is " << bmi;
    return 0;
}