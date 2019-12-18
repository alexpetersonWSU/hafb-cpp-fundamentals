#pragma once
#include <iostream>

class Counter
{
private:
    unsigned int count_;
public:
    Counter() : count_(0) {}
    Counter(unsigned int count) : count_(count){}
    ~Counter() { std::cout << "Bye\n";}
    //Setter and Getter
    unsigned int count() {return count_;}
    void set_count(unsigned int count) {count_ = count;}
    // Operator overload
    //void operator ++() {++count_;}
    Counter operator ++(); //prefix only
    Counter operator ++(int);
};
