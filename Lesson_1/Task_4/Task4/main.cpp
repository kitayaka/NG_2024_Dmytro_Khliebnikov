#include <iostream>

using namespace std;

int main()
{
    int money;
    cout << "What's your salary?" << endl;
    cin >> money;

    if (money < 1000) {
        cout << "work harder" << endl;
    }
    if (money > 1000) {
        if (money < 1000000) {
            cout << "well done!" << endl;
        }
    }
    if (money > 1000000) {
        cout << "millionaire" << endl;
    }
}
