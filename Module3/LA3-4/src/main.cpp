#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
  Distance d2(12, 6.6);
  Distance d1(3, 10.8);

  d1.ShowDist();
  d2.ShowDist();

  if (d1 < d2)
  {
    std::cout << d1 << " is less than " << d2 << std::endl;
  }
  
  d1.update_distance(3, 6);

  d2 = d1;
  std::cout << d1 << " & " << d2 << std::endl;

  if (d1 == d2)
  {
    std::cout << d1 << " is equal to " << d2 << std::endl;
  }

  Distance d3 = d2; //Assignment operator not invoked / initialization != assignment / copy constructor
  Distance d4(d3); //copy constructor


  return 0;
}