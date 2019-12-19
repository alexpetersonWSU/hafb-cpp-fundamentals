#include <iostream>
#include <array>
#include <algorithm> //for iterators

// Local Prototypes
void fun(int const& value); 


int main()
{
    std::array<int, 3> info = {4, 7, 9};
    std::cout<<"First element: " << info.front() << std::endl;
    std::cout<<"Last element: " << info.back() << std::endl;
    std::cout<<"Size of Array: " << info.size() << std::endl;
    //iterate over elements
    for(size_t i = 0; i < info.size(); i++)
    {
        std::cout << &info[i] << " " << info[i] << std::endl;
    }
    std::cout << "\n";
    std::cout << "Loop using iterator notation. Using built-in functions for"
        << " begin and end members of containers" << std::endl;
    for(auto it = std::begin(info); it != std::end(info); ++it)
    {
        //std::cout << it <<std::endl;    // it is a pointer (address)
        std::cout << it << " " << *it <<std::endl;   // *it: the value at the address
    }

    std::cout << std::endl;
    //Range based loops
    std::cout<<"Range based for loop" << std::endl;
    for(const auto& value : info)
    {
        std::cout << value << std::endl;
    }
    std::cout << std::endl;

    //For each loops
    // functor: function that acts like an object
    std::cout << "Using for_each algorithm, using a function or functor" << std::endl;
    std::for_each(std::begin(info), std::end(info), fun);
    std::cout << std::endl;

    //Lambdas: [](){}
    // [] to take any local variables in the scope
    // () declare the parameters of your function
    // {} declare the body of your function
    std::cout << "Using for_each algorithm, using lambdas" << std::endl;
    std::for_each(std::begin(info), std::end(info), [](int const& value){std::cout<<value<<"\n";});

    return 0;
}

// Local function definitions
void fun(int const& value) 
{
    std::cout << value << "\n";
}