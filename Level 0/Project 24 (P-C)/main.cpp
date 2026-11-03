#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int lowest;
    std::cin >> lowest;
    int position = 1;

    for (int i = 2; i <= n; ++i)
    {
        int value;
        std::cin >> value;

        if (value < lowest)
        {
            lowest = value;
            position = i;
        }
    }

    std::cout << lowest << ' ' << position << '\n';
    return 0;
}
