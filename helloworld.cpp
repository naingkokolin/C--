#include <iostream>

int main()
{
    auto var1{12};
    auto var2{24.0};
    auto var3{23.0f};
    auto var4{23.0l};
    auto var5{"e"};

    std::cout << "hello world!" << std::endl;
    std::cout << std::showpoint;
    std::cout << var1 << std::endl;

    return 0;
}