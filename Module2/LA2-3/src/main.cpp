#include <array>
#include <iostream>
#include <string>
#include <fstream> // for io files
#include <iomanip>

/**
 * @brief Shows how to define and use an ofstream object to write to a file.
 *
 * We will define ofstream objects and then see some of the operators
 * and functions that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // arrays that contain data
  const int kMaxSize = 20;
 std:: array<int, kMaxSize> commute_minutes = {22, 51, 63, 12, 17, 93, 45,
                                          18, 66, 45, 43, 77, 38, 43,
                                          52, 21, 8,  19, 7,  14};

  std::array<int, kMaxSize> commute_miles = {8,  22, 28, 2,  4,  62, 15, 6, 42, 28,
                                        16, 43, 27, 18, 41, 8,  3,  5, 2,  4};

  std::array<std::string, kMaxSize> towns = {
      "Bountiful",    "Centerville",        "Clinton",       "South Weber",
      "West Point",   "Cottonwood Heights", "Murray",        "Salt Lake City",
      "South Jordan", "West Jordan",        "American Fork", "Lindon",
      "Payson",       "Pleasant Grove",     "Spanish Fork",  "Harrisville",
      "Ogden",        "Pleasant View",      "Riverdale",     "South Ogden"};

  std::array<std::string, kMaxSize> names = {
      "Walter", "Chris", "Stan",   "Mary",  "Shelly", "Kim",  "Kelly",
      "George", "Sam",   "Walter", "Ann",   "Laura",  "Paul", "Phillip",
      "Susan",  "Hal",   "Olivia", "Polly", "Roy",    "Scott"};

  // create a variable of type ofstream
  std::ofstream commute_file;

  // open the file commute.txt
  commute_file.open("../commute.csv");
  if(commute_file.fail())
  {
    std::cout << "Unable to open commute.txt. \nShutting down\n";
    return 1;
  }

  // write commute_minutes and commute_miles to the file commute.txt
  for(int index = 0; index < kMaxSize; ++index)
  {
    commute_file << commute_minutes[index] << "," << commute_miles[index] << std::endl;
  }
  commute_file.close();

  // create a variable of type ofstream and open the file town.txt
  std::ofstream towns_file;
  towns_file.open("../towns.csv");

  if(towns_file.fail())
  {
    std::cout << "Unable to open towns.csv. \nShutting down\n";
    return 1;
  }

  // write the towns to the file town.txt
  for(int index = 0; index < kMaxSize; ++index)
  {
    towns_file << towns[index] << "," << names[index] << std::endl;
  }
  towns_file.close();

  // create a variable of type ofstream and open the file commute_data.txt
  std::ofstream commute_data_file;
  commute_data_file.open("../commute_data.csv");

  if(commute_data_file.fail())
  {
    std::cout << "Unable to open commute_data_file.csv. \nShutting down\n";
    return 1;
  }
  // write commute_minutes, commute_miles, and towns to the file commute.txt

  // do computations and add labeling to data before writing to file

  // write a report to the commute_report.txt file. Include name, town,
  // commute_minutes, commute_miles, and average minutes per mile to the file
  // commute.txt
  std::string header = "version,minutes,miles,min/miles,name,town";
  commute_data_file << header << std::endl;

  for(int index = 0; index < kMaxSize; ++index)
  {
    commute_data_file << "V1,"
      << commute_minutes[index] << ","
      << commute_miles[index] << ","
      << std::setprecision(3) << static_cast<float>(commute_minutes[index])/commute_miles[index] << ","
      << names[index] << ","
      << towns[index]
      << std::endl;
  }
  commute_data_file.close();

  return 0;
}
