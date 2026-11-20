#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << -1;
        return 0;
    }

    for (int number = 2; number <= n; number += 2) {
        cout << number << '\n';
    }

    return 0;
}