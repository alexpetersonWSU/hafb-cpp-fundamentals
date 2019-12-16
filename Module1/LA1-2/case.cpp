/**
 * @file case.cpp
 * @author Alex Peterson
 * @brief Multiple if 
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
    char code;
    cout << "Enter the specification code: ";
    cin >> code;

    //When comparing characters use single ticks ' '
    // if(code == 'S')
    // {
    //     cout << "The item is space exploration grade." << endl;
    // }

    // Use a switch statement
    switch(code)
    {
    case 'S':
    case 's':
        cout << "The item is space exploration grade." << endl;
        break;

        case 'M':
        cout << "The item is military grade." << endl;
        break;

        case 'C':
        cout << "The item is commercial grade." << endl;
        break;

        case 'T':
        cout << "The item is toy grade." << endl;
        break;

    default:
        cout << "The item no supported." << endl;
        break;
    }

    return 0;
}