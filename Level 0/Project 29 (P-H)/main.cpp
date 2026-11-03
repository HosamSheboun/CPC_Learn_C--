#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    int testCases;
    std::cin >> testCases;

    while (testCases--)
    {
        std::string first;
        std::string second;
        std::cin >> first >> second;

        std::string combined;
        combined.reserve(first.size() + second.size());

        const std::size_t length = std::max(first.size(), second.size());
        for (std::size_t i = 0; i < length; ++i)
        {
            if (i < first.size())
            {
                combined += first[i];
            }
            if (i < second.size())
            {
                combined += second[i];
            }
        }

        std::cout << combined << '\n';
    }

    return 0;
}
