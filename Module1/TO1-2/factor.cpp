#include "factor.h"

// Function Definition
void FactorMod3()
{
  unsigned int count = 0;
  // algorithm
  for(unsigned int x = 1; x <= 30; ++x)
{
   if (x % 3 == 0)
  {
    count++;
  }
}

  cout << "Result is: " << count << endl;
  return;   // optional return on void functions
}

/**
 * @brief Calculate the number of instances divisible
 * by the input parameter in the range 1 through 30
 * 
 * @param mod_number: the divisible number 
 */
void FactorModX(int mod_number)
{
  unsigned int count = 0;
  // algorithm
  for(unsigned int x = 1; x <= 30; ++x)
{
   if (x % mod_number == 0)
  {
    count++;
  }
}

  cout << "Result is: " << count << endl;
  return;   // optional return on void functions
}


void FactorModXRange(int mod_number, int max_range)
{
  unsigned int count = 0;
  // algorithm
  for(unsigned int x = 1; x <= max_range; ++x)
{
   if (x % mod_number == 0)
  {
    count++;
  }
}

  cout << "Result is: " << count << endl;
  return;   // optional return on void functions
}