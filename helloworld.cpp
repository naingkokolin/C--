#include <iostream>
#include <iomanip>

int main()
{
    std::string firstName = "naing ko";
    std::string lastName = "ko lin";
    int age{21};

    std::string firstName1 = "hsu phyu";
    std::string lastName1 = "sin";
    int age1{21};

    std::string firstName2 = "ko koe";
    std::string lastName2 = "baby";
    int age2{21};

    std::cout << std::setw(10) << std::left << "First Name" << std::setw(10) << std::left << "Last Name " << std::setw(5) << std::left << "Age" << std::endl;
    std::cout << std::setw(10) << std::left << firstName << std::setw(10) << std::left << lastName << std::setw(5) << std::left << age << std::endl;

    bool isTrue{true};

    std::cout << "It is true or false in boolalpha : " << std::boolalpha << isTrue << std::endl;
    std::cout << "It is true or false in noboolalpha : " << std::noboolalpha << isTrue << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl;

    unsigned int num1{10};

    std::cout << std::showpos << num1 << std::endl;

    return 0;
}

// * In day 2, I learned output formatting, numeric limits, math functions.