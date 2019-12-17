#include <array> // for array containers
#include <iostream> // basic io
#include <string> // strings
#include <fstream> // file stream

const int kMaxSize = 24;

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // create an ojbect of type ifstream
  std::cout << "---Ages---" << std::endl;
  std::ifstream in; // inputFileStream

  // open the file age.txt
  in.open("../age.txt"); // relative path from executable

  if(in.fail())
  {
    std::cout << "Unable to open file age.txt. \nShutting down\n";
    return 1;
  }

  // read from the age file and store values in an array
  std::array<int, kMaxSize> ages;
  ages.fill(-1); // initialize elements to -1
  int age_size = 0;
  // in >> ages[age_size];

  // read to the end of the file
  while(age_size < kMaxSize && in >> ages[age_size])
  {
    age_size++;
  }

  // print out the values in the array
  for(auto age : ages)
  {
    std::cout << age << std::endl;
  }
  in.close(); //close the input file
  std::cout << std::endl;


  // print out the valid values in the array


  // print out the all the values in the array


  // Define an ifstream object and open the file name.txt
  std::cout << "---Names---" << std::endl;
   std::ifstream inNames;
  inNames.open("../name.txt"); // relative path from executable

  if(inNames.fail())
  {
    std::cout << "Unable to open file name.txt. \nShutting down\n";
    return 1;
  }

  std::array<std::string, kMaxSize> names;
  names.fill(""); // initialize elements to -1
  int name_size = 0;

  // read one name, store it in the array, and print it

  // read the rest of the names in the file
  while(name_size < kMaxSize && getline(inNames, names[name_size])) //inNames >> names[name_size])
  {
    name_size++;
  }

  // print valid elements in the names array


  // print all the elements in the names array

  for(auto name : names)
  {
    std::cout << name << std::endl;
  }
  inNames.close();

  // Use a file with mixed values
  // Define an ifstream object and open the file name_age.txt
  std::cout << "---Names and Age---" << std::endl;
   std::ifstream inBoth;
  inBoth.open("../name_age.txt"); // relative path from executable

  if(inBoth.fail())
  {
    std::cout << "Unable to open file name_age.txt. \nShutting down\n";
    return 1;
  }


  // reset age and name arrays
  names.fill("");
  ages.fill(-1);
  int index = 0;
  // read all the values from the name_age.txt file
  while(index < kMaxSize && inBoth >> ages[index])
  {
    inBoth.ignore();
    std::getline(inBoth, names[index]);
    index++;
  }



  // print valid elements in the names and ages array
  for(int num = 0; num < index; ++num)
  {
    std::cout << "Age: " << ages[num] << " for name: "
    << names[num] << std::endl;
  }
  std::cout << std::endl;

  // print all elements in the names and ages array
  std::cout << "---Names---" << std::endl;
  for(auto name : names)
  {
    std::cout << name << std::endl;
  }
  inNames.close();
  std::cout << std::endl;

  std::cout << "---Ages---" << std::endl;
  for(auto age : ages)
  {
    std::cout << age << std::endl;
  }
  in.close(); //close the input file
  std::cout << std::endl;

  return 0;
}
