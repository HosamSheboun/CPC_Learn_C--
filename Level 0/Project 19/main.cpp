#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cout << "Array size is: " << N << '\n';

    int A[N];
    cout << "Reading " << N << " elements into array:\n";
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        cout << "A[" << i << "] = " << A[i] << '\n';
    }

    int X;
    cin >> X;
    cout << "Searching for: " << X << '\n';

    int position = -1;
    cout << "Starting linear search......\n";

    for (int i = 0; i < N; i++)
    {
        cout << "Checking A[" << i << "] = " << A[i] << '\n';
        if (A[i] == X)
        {
            cout << " -> FOUND!\n";
            position = i;
            cout << "First occurrence at index: " << position << '\n';
            break;
        }

        else
        {
            cout << " -> Not a match\n";
        }
    }

    if (position == -1)
    {
        cout << "Element " << X << " not found in array\n";
    }

    cout << "\nFinal answer: " << position << '\n';
    return 0;
}
