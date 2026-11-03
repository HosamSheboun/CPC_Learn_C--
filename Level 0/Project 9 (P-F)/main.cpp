#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    cin >> X;

    while (X >= 10)
    {
        X /= 10;
    }

    if (X % 2 == 0)
    {
        cout << "EVEN\n";
    }
    else
    {
        cout << "ODD\n";
    }

    return 0;
}
