#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a[1000];
    int b[1000];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    bool isPermutation = true;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[i])
        {
            isPermutation = false;
            break;
        }
    }

    cout << (isPermutation ? "yes" : "no") << '\n';
    return 0;
}