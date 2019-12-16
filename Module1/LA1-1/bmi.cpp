#include <iostream>
using namespace std;

const float kMeterTOInches = 39.37;
const float kKiloToPounds = 2.204;
const float kBMIImperial = 703;
const float kLowBMILimit = 18.5;
const float kHighBMILimit = 24.9;

int main()
{
    //calculate BMI: weight(kg)/[height(m)]^2
    float weight = 0, height = 0, bmi = 0;

    cout << "Please enter your weight in kg: ";
    cin >> weight;

    cout << "Please enter your height in meters: ";
    cin >> height;

    bmi = weight / (height * height);
    cout << "Your metric BMI is " << bmi << endl;

    //calcualte again in imperial

    weight = weight * kKiloToPounds;
    height = height * kMeterTOInches;

    bmi = weight * kBMIImperial / (height * height);
    cout << "Your imperial BMI is " << bmi << endl;

    //Print if they are in the "good" range: BMI 18.5 to 24.9
    if(bmi > kLowBMILimit && bmi < kHighBMILimit)
    {
        cout << "Your BMI " << bmi << " is good" << endl;
    }
    else
    {
        {
            cout << "Your BMI " << bmi << " is bad" << endl;
        }
    }
    

    cout << "Thanks for using this BMI program." << endl;

    return 0;
}