#include <bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin >> X;

    if (X >= '0' && X <= '9')
    {
        cout << "IS DIGIT\n";
    }
    else if (X >= 'A' && X <= 'Z')
    {
        cout << "ALPHA\n";
        cout << "IS CAPITAL\n";
    }
    else if (X >= 'a' && X <= 'z')
    {
        cout << "ALPHA\n";
        cout << "IS SMALL\n";
    }

    return 0;
}
