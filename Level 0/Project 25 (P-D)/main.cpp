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

    for (int i = n - 1; i >= 0; --i)
    {
        if (i < n - 1)
        {
            std::cout << ' ';
        }
        std::cout << numbers[i];
    }
    std::cout << '\n';

    return 0;
}
