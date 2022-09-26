#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    size_t i{}; // iterator declaration

    while (i < 10)
    {
        cout << i << ". I love programming" << endl;
        i++;
    }
    cout << "Loop end!=" << endl;

    return 0;
}