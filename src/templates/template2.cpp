#include <iostream>
#include <string>

template<typename T>
void Print(T value)
{
    std::cout << value << std::endl;
}

int main()
{
    Print<int>(5);
    Print<std::string>("Hello");
    
    std::cin.get();
}