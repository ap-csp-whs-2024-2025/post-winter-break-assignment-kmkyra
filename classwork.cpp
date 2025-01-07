#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline

int main()
{
    // Set up variables
    int num1;
    std::string noun1;
    std::string adjective1;
    std::string name1;
    std::string noun2;
    std::string name2;
    std::string verb1;

    // Get user input
    std::cout << "Enter a number: \n";
    std::cin >> num1;

    std::cout << "Enter two nouns: \n";
    std::cin >> noun1 >> noun2;

    std::cout << "Enter an adjective: \n";
    std::cin >> adjective1;

    std::cout << "Enter two names: \n";
    std::cin >> name1 >> name2;

    std::cout << "Enter a verb: \n";
    std::cin >> verb1;

    // Display story
    std::cout << "There was once a " << noun1 << " named " << name1 << ". They were very " << adjective1 << ", and they were " 
    << num1 << " years old.\n " "One day, " << name1 << " met a " << noun2 << " named " << name2 << ". Together, they "
    << verb1 << " and live happily ever after.";
    
    return 0;
}
