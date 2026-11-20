#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    const string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int q;
    string s;
    cin >> q >> s;

    for (char& ch : s)
    {
        if (q == 1)
        {
            ch = key[original.find(ch)];
        }
        else
        {
            ch = original[key.find(ch)];
        }
    }

    cout << s << '\n';
    return 0;
}