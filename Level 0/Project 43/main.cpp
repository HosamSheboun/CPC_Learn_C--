#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t))
    {
        return 0;
    }

    while (t--)
    {
        string position;
        if (!(cin >> position))
        {
            return 0;
        }

        for (char row = '1'; row <= '8'; ++row)
        {
            if (row != position[1])
            {
                cout << position[0] << row << '\n';
            }
        }

        for (char column = 'a'; column <= 'h'; ++column)
        {
            if (column != position[0])
            {
                cout << column << position[1] << '\n';
            }
        }
    }

    return 0;
}
