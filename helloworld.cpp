#include <iostream>
#include <iomanip>

const int phone{10};
const int laptop{1};

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        std::cout << std::setw(5) << i << ". arr bwrrr" << std::endl;
    }

    return 0;
}