#include <iostream>
#include <iomanip>

const int phone{10};
const int laptop{1};

int main()
{
    int point{phone};

    switch (point)
    {
    case phone:
    {
        std::cout << "The case is phone" << std::endl;
    }
    break;

    case laptop:
    {
        std::cout << "The case is laptop" << std::endl;
    }

    default:
    {
        std::cout << "The case is default" << std::endl;
    }
    break;
    }

    return 0;
}

// * In day 2, I learned output formatting, numeric limits, math functions.