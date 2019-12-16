#include <iostream>
using namespace std;

const float kMeterTOInches = 39.37;
const float kKiloToPounds = 2.204;
const float kBMIImperial = 703;

int main()
{
    //calculate BMI: weight(kg)/[height(m)]^2
    float weight = 0, height = 0, bmi = 0;

    cout << "Please enter your weight in kg: ";
    cin >> weight;

    cout << "Please enter your height in meters: ";
    cin >> height;

    bmi = weight / (height * height);
    cout << "Your BMI is " << bmi << endl;

    //calcualte again in imperial

    weight = weight * kKiloToPounds;
    height = height * kMeterTOInches;

    bmi = weight * kBMIImperial / (height * height);
    cout << "Your imperial BMI is " << bmi << endl;

    return 0;
}