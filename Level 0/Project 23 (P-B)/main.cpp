#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for (int& number : numbers)
    {
        std::cin >> number;

        if (number > 0)
        {
            number = 1;
        }
        else if (number < 0)
        {
            number = 2;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (i > 0)
        {
            std::cout << ' ';
        }
        std::cout << numbers[i];
    }
    std::cout << '\n';

    return 0;
}
