#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    int operation;
    cout << "First number" << endl;
    cin >> num1;
    cout << "Second number" << endl;
    cin >> num2;
    cout << "Choose an operation:" << endl;
    cout << "1. Sum" << endl;
    cout << "2. Difference" << endl;
    cout << "3. Product" << endl;
    cout << "4. Quotient" << endl;
    cin >> operation;
    switch(operation){
    case 1:
        cout << "1. Sum: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "2. Difference: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "3. Product: " << num1 * num2 << endl;
        break;
    case 4:
        cout << "4. Quotient: " << num1 / num2 << endl;
        break;
    }
}
