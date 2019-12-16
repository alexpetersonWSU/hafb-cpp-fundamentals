/**
 * @file multi_tables.cpp
 * @author Alex Peterson
 * @brief Display multiplication tables based on user input
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number;
    cout << "Enter a value to print multiplication tables: " << endl;
    cin >> number;

    for(int num1 = 1; num1 <= number; ++num1)
    {
        for(int column = 1; column <= 10; ++column)
        {
            cout << setw(5) << column * num1 << " ";
        }

        cout << endl;
    }
    return 0;
}