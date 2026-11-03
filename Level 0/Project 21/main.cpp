#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    switch (a) {
    case 5:
        cout << "a is equal to 5";
        break;
    case 10:
        cout << "a is equal to 10";
        break;
    default:
        cout << "a is not equal to 5 or 10";
    }

    return 0;
}