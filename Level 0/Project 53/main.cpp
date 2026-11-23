#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;
    int a[256] = {};
    int n = s.size ();

    for (int i = 0; i < n; i++) {
        a[(int)s[i]]++;
    }

    for (char x = 'A'; x <= 'z'; x++) {
        if (a[(int)x] != 0) {
            cout << x << " " ;
            cout << a[(int)x] << endl;
        }
    }

    return 0;
}
