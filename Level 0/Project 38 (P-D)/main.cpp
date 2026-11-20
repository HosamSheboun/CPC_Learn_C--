#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c) {
        cout << "A";
    } else if (b > a && b > c) {
        cout << "B";
    } else {
        cout << "C";
    }

    return 0;
}