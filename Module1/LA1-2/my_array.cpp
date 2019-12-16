/**
 * @file my_array.cpp
 * @author Alex Peterson
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
using namespace std;

const int kMaxNum = 5;
int main()
{
    //C-style
    //Array notation: type name[elements];
    //int grades[kMaxNum]; // an array of 5 integers
    int grades[kMaxNum] = {10, 20, 30, 40, 50};
    //int grades[] = {10, 20, 30, 40, 50}; // array of 5 integers set by the compiler
    //int grades[kMaxNum] = {10, 20, 30}; // an array of 5, initialize 3, rest are 0
    float average = 0;
    int sum = 0;
    cout << "Enter your exam grades" << endl;
    for(int num = 0; num < kMaxNum; ++num)
    {
        cout << "Enter " << num + 1 << " grade: " << endl;
        cin >> grades[num];
        sum += grades[num];
    }

    average = sum/kMaxNum;
    cout << "Your average grade is: " << average << endl;

    // cast to float to preserve fraction
    //static_cast<type>(variable)
    average = static_cast<float>(sum)/kMaxNum;
    cout << "Your avg is: " << average << endl;

    //2D arrays: type name[row][column];
    int bi_array[3][5] = {
        {2, 4, 6, 11, 67},
        {4, 5, 22, 33, 99},
        {89, 33, 22, 11, 0}
    };

    //Print each element in the array
    for(int row = 0; row < 3; ++row)
    {
        for(int column = 0; column < 5; ++column)
        {
            cout << "Array element at [" << row << "]"<<
                "["<<column<<"] = "<< bi_array[row][column] << endl;
        }
    }

    return 0;
}