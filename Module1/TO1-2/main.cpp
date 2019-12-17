#include "factor.h"

// Main function
int main()
{
  FactorMod3();     // call function
  FactorModX(3);
  FactorModXRange(3, 30);
  unsigned int count = GetFactorModXRange(3, 30);
  cout << "Result is: " << count << endl;
  auto count2 = GetFactorModXRange(3, 30);
  cout << "Result is: " << count2 << endl;
  return 0;
}