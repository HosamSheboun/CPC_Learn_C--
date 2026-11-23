#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int L, R;
    cin >> L >> R;

    long long sum = 0;
    for (int i = L - 1; i < R; ++i) {
        sum += a[i];
    }

    cout << sum;
    return 0;
}