#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long answer = 0;
        for (int i = 0; i < n; ++i)
        {
            int value;
            cin >> value;
            answer += value < 0 ? -value : value;
        }

        cout << answer << '\n';
    }

    return 0;
}
