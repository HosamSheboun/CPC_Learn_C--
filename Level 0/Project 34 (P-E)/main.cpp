#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string digits;
    cin >> n >> digits;

    int sum = 0;
    for (char digit : digits) {
        sum += digit - '0';
    }

    cout << sum << '\n';
    return 0;
}