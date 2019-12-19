#include <iostream>

struct Part
{
   int model_number;
   int part_number;
   float cost;
};

struct Car
{
   Part doors;
   Part windows;
   Part tires;
};

// Local Prototypes

int main()
{
   Part part1;
   part1.model_number = 6244;
   part1.part_number = 373;
   part1.cost = 45.99;
   std::cout <<"Model: " << part1.model_number
      << " part: " <<part1.part_number
      << " cost: $" << part1.cost << std::endl;

   Part part2 = {6277, 781, 32.10}; // declare and initialize
   std::cout <<"Model: " << part2.model_number
      << " part: " <<part2.part_number
      << " cost: $" << part2.cost << std::endl;

   // Part part3;
   // part3 = part2;
   // std::cout <<"Model: " << part3.model_number
   //    << " part: " <<part3.part_number
   //    << " cost: $" << part3.cost << std::endl;

   Car sedan;
   sedan .doors.part_number = 101;
   sedan.windows.model_number = 7001;
   sedan.tires.cost = 89.99;

   return 0;
}
