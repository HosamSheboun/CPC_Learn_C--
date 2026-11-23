#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int f[100001] = {};
    for(int j = 0; j < n; j++) {
        f[a[j]]++;
    }
    for(int x = 1; x <= m; x++) {
        cout << f[x] << endl;
    }
    return 0;
}