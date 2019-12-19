#include "containers.h"
#include "csvstream.h"
#include <iostream>
#include <algorithm>
#include <iterator>

void Load_Data(std::vector<Data> &data, const std::string &input_file)
{
    csvstream csvinput(input_file); //open file
    //rows have a key = column name, value = cell data
    std::map<std::string, std::string> row;
    // Extract the animal column
    while(csvinput >> row)
    {
     Data temp;
     temp.id = std::stoi(row["id"]);
     temp.name = row["name"];
     temp.animal = row["animal"];
     data.push_back(temp);
    } 
}
