// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
#include <math.h>
#include "distance.h"

/**
 * @brief Show the distance in inches and feet
 * 
 */
void Distance::ShowDist() const
{
    std::cout << feet() << "\'-" << inches() << "\"" << std::endl; 
}

/**
 * @brief Plus + Operator for distance objects
 * 
 * @param d2 Second distance object
 * @return Distance: Sum of self + d2 objects
 */
Distance Distance::operator +(Distance rhs) const
{
    int feet = feet_ + rhs.feet_;
    float inches = inches_ + rhs.inches_;

    // if(inches > 12)
    // {
    //     inches -= 12;
    //     feet++;
    // }

    feet += inches / 12;
    inches = fmod(inches, 12);

    Distance temp(feet, inches);
    return temp;
}

// Distance Distance::operator -(Distance rhs) const
// {
//     int feet = feet_ - rhs.feet_;
//     float inches = 0;

//     if(inches_ < rhs.inches_)
//     {
//         feet--;
//         inches = (inches_ + 12) - rhs.inches_;
//     }
    
//     return Distance(feet, inches);
// }

Distance operator -(Distance lhs, Distance rhs) // friend operator
{
    int feet = lhs.feet_ - rhs.feet_;
    float inches = 0;

    if(lhs.inches_ < rhs.inches_)
    {
        feet--;
        inches = (lhs.inches_ + 12) - rhs.inches_;
    }
    
    return Distance(feet, inches);
}

std::ostream& operator <<(std::ostream& os, const Distance& distance)
{
    // Recommended NOT to include a '\n' or endl character
    os << "Feet: " << distance.feet_ << " Inches: " << distance.inches_;
    return os;
}

bool Distance::operator <(Distance rhs) const
{
    return (feet_ * 12 + inches_) < (rhs.feet_ * 12 + rhs.inches_);
}

bool Distance::operator ==(Distance rhs) const
{
    return (feet_ * 12 + inches_) == (rhs.feet_ * 12 + rhs.inches_);
}

void Distance::update_distance(int ft, float in)
{
    set_feet(ft);
    set_inches(in);
}

Distance Distance::operator =(Distance& rhs)
{
    std::cout << "Assignment operator invoked!" << std::endl;
    feet_ = rhs.feet_;
    inches_ = rhs.inches_;
    return Distance(feet_, inches_);
}

Distance::Distance(const Distance& dist) //Copy constructor
{
    std::cout<<"Copy constructor invoked"<<std::endl;
    feet_ = dist.feet_;
    inches_ = dist.inches_;
}