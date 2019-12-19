/**
 * @file my_sets.cpp
 * @author your name (you@domain.com)
 * @brief  Learn about sets:
 * Elements are stored according to the values
 * Elements are all distinct value
 * @version 0.1
 * @date 2019-12-19
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <set> // A container with a UNIQUE group SORTED elements
//Methods: size(), empty(), insert(), erase(),
// find(): returns the postion of the first element equal to the provided value
//  You should always compare the value against the end() of the container

int main()
{
    std::set<int> numbers;
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);
    //search for a value
    if(numbers.find(10) != numbers.end()) // end is not the last element but the end of the set
    {
        std::cout << "10 is in the numbers" << std::endl;
    }
    std::cout<< "The set has: " << numbers.size() << " elements" << std::endl;

    std::cout << "Using an iterator" << std::endl;
    for(auto it = std::begin(numbers); it != std::end(numbers); ++it)
    {
        std::cout << *it << std::endl; // de-reference the value "it" points to
    }

    return 0;
}