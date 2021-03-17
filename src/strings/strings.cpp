#include <iostream>
#include <string>

void PrintString(const std::string& string)
{
    std::cout << string << std::endl;
}

int main()
{
    std::string name = std::string("Gongwei") + " hello!";
    name.size();
    bool contains = name.find("ei") != std::string::npos;
    std::cout << name << std::endl;
    std::cout << contains << std::endl;

    PrintString(name);

    std::cin.get();
}