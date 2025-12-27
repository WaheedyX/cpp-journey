/*
 * Description: Asking user for data and printing it back.
 * Concept: Variables ,cin ,chaining input/output
 */
#include <iostream>
#include <string>
int main()
{
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << "Welcome , " << name << "!" << std::endl;
    return 0;
}