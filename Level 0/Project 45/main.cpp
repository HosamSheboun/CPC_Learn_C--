#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    if (!(cin >> n))
    {
        return 0;
    }

    size_t firstDigit = n.find_first_not_of('0');
    if (firstDigit == string::npos)
    {
        n = "0";
    }
    else
    {
        n = n.substr(firstDigit);
    }

    string reversed = n;
    reverse(reversed.begin(), reversed.end());

    size_t reversedFirstDigit = reversed.find_first_not_of('0');
    if (reversedFirstDigit == string::npos)
    {
        reversed = "0";
    }
    else
    {
        reversed = reversed.substr(reversedFirstDigit);
    }

    cout << reversed << '\n';
    cout << (n == reversed ? "YES" : "NO") << '\n';

    return 0;
}