#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n;
        string a, b, c;
        cin >> n >> a >> b >> c;

        bool possible = false;
        for (int i = 0; i < n; ++i)
        {
            if ((a[i] == b[i] && a[i] != c[i]) ||
                (a[i] != c[i] && b[i] != c[i]))
            {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}