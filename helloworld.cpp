#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
    int nums[10];
    int array[10];

    cout << "Enter ten numbers : " << endl;
    for (size_t i{0}; i < 10; i++)
    {
        cin >> nums[i];
    }
    cout << "*****************************" << endl;

    // sorting numbers
    int max = nums[0];
    for (size_t i = 0; i < 10; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

    for (size_t i{0}; i < 10; i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}