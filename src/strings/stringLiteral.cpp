#include <iostream>
#include <cstring>

#include <stdlib.h>

int main()
{
    using namespace std::string_literals;

    std::u32string name0 = U"Gongwei"s + U" hello";

    const char* example = R"(line1
    line2
    line3
    line4)";

    const char* name = u8"gongwei";
    const wchar_t* name2 = L"gongwei";

    const char16_t* name3 = u"gongwei";
    const char32_t* name4 = U"gongwei";

    // const char name[9] = "Gon\0gwei";
    std::cout << strlen(name) << std::endl;
    std::cout << name3 << std::endl;
    std::cout << name4 << std::endl;

    std::cin.get();
}