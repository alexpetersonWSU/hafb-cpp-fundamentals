/**
 * @file age.cpp
 * @author Alex Peterson (alexpeterson1@mail.weber.edu)
 * @brief Print user rights based on age
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    //Display rights by age
    // 1) If you are under 18, you must go to school
    if(age < 18)
    {
        cout << "You should be in school" << endl;
    }
    // 2) If you are over 18, you can vote
    else if (age >= 18 && age < 21)
    {
        cout << "You can vote" << endl;
    }
    // 3) If you are over 21, you can by alcohol
    else if (age >= 21 && age < 65)
    {
        cout << "You can buy alcohol" << endl;
    }
    // 4) If you are over 65, you can retire
    else if (age >= 65)
    {
        cout << "You can retire" << endl;
    }
    
    
    return 0;
}