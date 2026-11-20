#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;

        if (value > 0) {
            cout << 1;
        } else if (value < 0) {
            cout << 2;
        } else {
            cout << 0;
        }

        if (i + 1 < n) {
            cout << ' ';
        }
    }

    return 0;
}