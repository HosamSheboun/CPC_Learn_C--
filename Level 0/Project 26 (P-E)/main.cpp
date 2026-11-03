#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<long long> numbers(n);
    for (long long& number : numbers)
    {
        std::cin >> number;
    }

    bool isPalindrome = true;
    for (int i = 0; i < n / 2; ++i)
    {
        if (numbers[i] != numbers[n - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    std::cout << (isPalindrome ? "YES" : "NO") << '\n';
    return 0;
}
