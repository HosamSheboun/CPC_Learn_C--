#include <bits/stdc++.h>
using namespace std;

bool isLucky(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main()
{
    int l, r;
    cin >> l >> r;

    bool found = false;
    for (int i = l; i <= r; i++)
    {
        if (isLucky(i))
        {
            if (found)
                cout << " ";
            cout << i;
            found = true;
        }
    }

    if (!found)
    {
        cout << -1;
    }

    cout << '\n';

    return 0;
}
