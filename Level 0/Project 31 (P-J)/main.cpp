#include <iostream>
#include <string>

int main()
{
    std::string text;
    std::getline(std::cin, text);

    for (char& character : text)
    {
        if (character == ',')
        {
            character = ' ';
        }
        else if (character >= 'a' && character <= 'z')
        {
            character = static_cast<char>(character - 'a' + 'A');
        }
        else if (character >= 'A' && character <= 'Z')
        {
            character = static_cast<char>(character - 'A' + 'a');
        }
    }

    std::cout << text << '\n';
    return 0;
}
