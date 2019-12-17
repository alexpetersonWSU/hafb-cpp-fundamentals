#include "my_functions.h"
// Function definition
/**
 * @brief Sum num1 & num2
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
int Sum(int num1, int num2) // pass both parameters by value (make your own copy)
{
  return num1 + num2;
}

/**
 * @brief Increments the value of step by 1
 * 
 * @param step 
 */
void UpdateStep(int& step) // take the address of the parameter
{
    cout << "Current step: " << step << endl;
    step++;
    cout << "New step: " << step << endl;
}