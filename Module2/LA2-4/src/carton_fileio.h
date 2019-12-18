#pragma once

#include <array>
#include <string>
#include "carton.h"

const int kMaxArraySize = 20;

std::string readDataFormatFromFile(std::string filename, // by value
            std::array<Carton, kMaxArraySize>& cartons,  //be reference
            int& rec_num);                               //be reference

void writeDataToFile(std::string filename,               // by value
            const std::array<Carton, kMaxArraySize>& cartons,   // by const reference
            int rec_num);                                       // by value