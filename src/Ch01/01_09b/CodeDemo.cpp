// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){ // This is the main program
    std::string name;
    std::cout << "Enter your name: " << std::flush;
    std::cin >> name;
    std::cout << "Nice to meet, " << name <<"!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}