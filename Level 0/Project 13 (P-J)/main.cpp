#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long fib1 = 0, fib2 = 1;

    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            cout << fib1;
        }
        else if (i == 2)
        {
            cout << " " << fib2;
        }
        else
        {
            long long next = fib1 + fib2;
            cout << " " << next;
            fib1 = fib2;
            fib2 = next;
        }
    }
    cout << '\n';

    return 0;
}
