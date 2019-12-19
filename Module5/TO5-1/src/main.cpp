#include <iostream>
#include "containers.h"
using namespace std;

// Main Function
int main()
{
// TODO: Define an empty vector of Data Structures called: information
std::string input = "../data/sample_data.csv";     // DO NOT MODIFY THIS LINE
std::vector<Data> information;
Load_Data(information, input); // Load Data

cout <<"Information size: " << information.size() << endl;

  return 0;
}