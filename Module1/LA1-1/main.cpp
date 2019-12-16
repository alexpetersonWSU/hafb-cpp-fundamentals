#include <iostream>
using namespace std;

int main()
{
    int age; // int: signed integers
    // cout: fpr system output
    std::cout << "Hello World" << std::endl;
    cout << "Another line under namespace std" << endl;
    cout << "Wildcats" << " WSU " << "Ogden" << endl;
    // cin: for system/user input

    cout << "What is your age?" << endl;
    cin >> age;
    cout << "I see you are: " << age << endl;
    return 0;
}