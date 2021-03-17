#include <iostream>
#include <string>

int main()
{
    char ch1 = 'a';
    char ch2 = 'a';

    const char ch3 = 'a';
    const char ch4 = 'a';

    const char* str = "abc";
    str = "ff";

    std::cout << (ch1 == ch2) << std::endl;
    std::cout << (ch3 == ch4) << std::endl;
    std::cout << str << std::endl;

    std::cin.get();
}