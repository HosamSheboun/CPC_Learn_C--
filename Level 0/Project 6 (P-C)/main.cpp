#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;

    long long origA = A, origB = B, origC = C;

    if (A > B) swap(A, B);
    if (B > C) swap(B, C);
    if (A > B) swap(A, B);

    cout << A << '\n' << B << '\n' << C << '\n';

    cout << '\n';

    cout << origA << '\n' << origB << '\n' << origC << '\n';

    return 0;
}
