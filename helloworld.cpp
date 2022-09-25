#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    bool isRunning = true;
    int count = 0;
    while (isRunning && count < 10)
    {
        cout << "Fighting" << endl;
        count++;
    }

    return 0;
}