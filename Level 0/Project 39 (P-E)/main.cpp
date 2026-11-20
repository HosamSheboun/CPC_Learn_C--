#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int floors = 1; floors <= n; ++floors) {
        for (int i = 0; i < floors; ++i) {
            cout << '#';
        }
        cout << '\n';
    }

    for (int floors = n; floors >= 1; --floors) {
        for (int i = 0; i < floors; ++i) {
            cout << '#';
        }
        cout << '\n';
    }

    return 0;
}