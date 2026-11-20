#include <iostream>
using namespace std;

bool isLucky(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        number /= 10;
    }
    return true;
}

int main() {

    int l, r;
    cin >> l >> r;
    bool found = false;

    for (int number = l; number <= r; ++number) {
        if (isLucky(number)) {
            if (found) {
                cout << ' ';
            }
            cout << number;
            found = true;
        }
    }

    if (!found) {
        cout << -1;
    }

    cout << '\n';
    return 0;
}