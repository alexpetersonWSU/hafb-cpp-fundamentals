/**
 * @file mysquares.cpp
 * @author your name (you@domain.com)
 * @brief Print multiple numbers squared
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <iomanip>  // for format output
#include <cmath>    // for sqrt()
using namespace std;

const int kMaxCount = 5;

int main()
{
    cout << "NUMBER     SQUARE ROOT" << endl;
    cout << "------     -----------" << endl;
    cout << setiosflags(ios::showpoint);
    for(int count = 1; count < kMaxCount; ++count)
    {
        cout << setw(4) << count <<
        setw(15) << sqrt(count) << endl;
    }
    cout << "Done" << endl;
    return 0;
}