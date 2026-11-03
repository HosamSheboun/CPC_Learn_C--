#include <bits/stdc++.h>
using namespace std;

int main()
{
    double N;
    cin >> N;

    long long intPart = N;
    
    float x = N - intPart;

    if ((N - intPart) == 0)
    {
        cout << "int " << intPart << '\n';
    }
    else
    {
        cout << fixed << setprecision(3) << "float " << intPart << " " << x << '\n';
    }

    return 0;
}
