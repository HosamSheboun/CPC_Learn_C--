#include <iostream>
#include <string>

int main()
{
    std::string first;
    std::string second;
    std::cin >> first >> second;

    std::cout << first.length() << ' ' << second.length() << '\n';
    std::cout << first << ' ' << second << '\n';

    return 0;
}
