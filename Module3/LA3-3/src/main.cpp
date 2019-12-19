#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
  Distance d1(34, 9.5);
  // d1.ShowDist();

  Distance d2(10, 8.5);
  Distance d3;

  d1.ShowDist();
  d2.ShowDist();
  std::cout << "+___________" << std::endl;

  //add 2 objects
  d3 = d1 + d2;
  d3.ShowDist();

  std::cout << "\n" << std::endl;

  Distance d4 = d1 + d2 + d3;
  d4.ShowDist();

  //display info with std::cout
  std::cout << d4 << std::endl;

  return 0;
}