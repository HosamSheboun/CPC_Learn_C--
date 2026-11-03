#include <iostream>
#include <string>

int main()
{
    std::string digits;
    std::getline(std::cin, digits);

    int sum = 0;
    for (char digit : digits)
    {
        sum += digit - '0';
    }

    std::cout << sum << '\n';
    return 0;
}
