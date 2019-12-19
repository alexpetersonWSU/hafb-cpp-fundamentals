#include "csvstream.h"
#include "containers.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;

// Main Function
int main()
{
  // csvstream csvinput("../data/input.csv"); //open file
  // //rows have a key = column name, value = cell data
  // std::map<std::string, std::string> row;
  // // Extract the animal column
  // while(csvinput >> row)
  // {
  //   //the key is the column name
  //   std::cout<< row["animal"]<< std::endl;
  // } 

  std::vector<Data> pet_owners;
  std:string in_file = "../data/input.csv";
  Load_Data(pet_owners, in_file);

  for(const auto& value : pet_owners)
  {
    std::cout << value.id << "\t" << value.name
      << "\t" << value.animal << std::endl;
  }

  return 0;
}