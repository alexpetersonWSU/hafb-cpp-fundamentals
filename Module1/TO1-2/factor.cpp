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