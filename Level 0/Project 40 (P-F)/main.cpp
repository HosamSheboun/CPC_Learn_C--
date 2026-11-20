#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mismatches = 0;
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;

        bool shouldBePositive = (i % 2 == 0);
        if ((value > 0) != shouldBePositive) {
            ++mismatches;
        }
    }

    cout << min(mismatches, n - mismatches);

    return 0;
}