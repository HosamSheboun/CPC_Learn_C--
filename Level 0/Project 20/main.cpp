#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cout << "Array size is: " << N << '\n';

    int A[N];
    cout << "Reading " << N << " elements into array...\n";
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        cout << "A[" << i << "] = " << A[i] << '\n';
    }

    cout << "\nChecking if array is palindrome...\n";
    cout << "A palindrome reads the same forward and backward\n";
    cout << "We compare elements from both ends moving toward center\n\n";

    bool isPalindrome = true;
    int left = 0;
    int right = N - 1;

    while (left < right)
    {
        cout << "Comparing A[" << left << "] = " << A[left];
        cout << " with A[" << right << "] = " << A[right];

        if (A[left] != A[right])
        {
            cout << " -> NOT EQUAL!\n";
            cout << "Array is NOT a palindrome\n";
            isPalindrome = false;
            break;
        }
        else
        {
            cout << " -> EQUAL ✓\n";
        }

        left++;
        right--;
    }

    if (isPalindrome)
    {
        cout << "\nAll pairs matched!\n";
        cout << "Array IS a palindrome\n";
    }

    cout << "\nFinal answer: ";
    if (isPalindrome)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
