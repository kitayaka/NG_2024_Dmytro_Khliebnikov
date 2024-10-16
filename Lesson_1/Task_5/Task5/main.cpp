#include <iostream>

using namespace std;

int main() {
    int start;
    cout << "number of stars";
    cin >> start;

    for (int width = 0; width < start; width++) {
        for (int height = 0; height < start - width - 1; height++) {
            cout << " ";
        }
        for (int height = 0; height < 2 * width + 1; height++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int height = 0; height < start - 1; height++) {
        cout << " ";
    }
    cout << "*" << endl;
}
