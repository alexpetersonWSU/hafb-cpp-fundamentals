#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
  Distance d1(12, 6.6);
  // d1.ShowDist();

  Distance d2(3, 10.8);
  Distance d3;

  d1.ShowDist();
  d2.ShowDist();
  std::cout << "+___________" << std::endl;

  //- 2 objects
  d3 = d1 - d2;
  d3.ShowDist();

  return 0;
}