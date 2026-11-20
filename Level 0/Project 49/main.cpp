#include <algorithm>
#include <iostream>
#include <vector>
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
        cin >> n;

        vector<int> values(n);
        for (int& value : values)
            cin >> value;

        vector<int> maxima;
        for (int start = 0; start < n; ++start)
        {
            int currentMaximum = values[start];
            for (int end = start; end < n; ++end)
            {
                currentMaximum = max(currentMaximum, values[end]);
                maxima.push_back(currentMaximum);
            }
        }

        sort(maxima.begin(), maxima.end());
        for (size_t i = 0; i < maxima.size(); ++i)
        {
            if (i > 0)
                cout << ' ';
            cout << maxima[i];
        }
        cout << '\n';
    }

    return 0;
}