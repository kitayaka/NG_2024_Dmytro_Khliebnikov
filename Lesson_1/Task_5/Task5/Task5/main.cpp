#include <iostream>

using namespace std;

int main() {
    int start;
    cout << "Vedi kolihestva svezd";
    cin >> start;

    for (int i = 0; i < start; i++) {
        for (int j = 0; j < start - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < start - 1; i++) {
        cout << " ";
    }
    cout << "*" << endl;
}
