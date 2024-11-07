#include <iostream>

using namespace std;

int main()
{
    int massive[5];
    cout << "Enter five numbers:";
    for (int number = 0; number < 5; number++)
    {
    cin >> massive[number];
    cout << massive[number];
    if (number < 4)
    cout << ",";
    }
}
