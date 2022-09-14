#include <iostream>
#include <cmath>

int main()
{
    short int var1{10};
    short int var2{20};

    std::cout << "size of var1 : " << sizeof(var1) << std::endl;
    std::cout << "size of var2 : " << sizeof(var2) << std::endl;

    auto var = var1 + var2;
    std::cout << "size of var : " << sizeof(var) << std::endl;

    return 0;
}

// * In day 2, I learned output formatting, numeric limits, math functions.