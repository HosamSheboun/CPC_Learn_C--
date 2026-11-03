#include <iostream>
#include <string>

int main()
{
    std::string text;
    std::getline(std::cin, text);

    const std::size_t separator = text.find('\\');
    std::cout << text.substr(0, separator) << '\n';

    return 0;
}
