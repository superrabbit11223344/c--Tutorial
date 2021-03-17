#include <iostream>

int main()
{
    int a = 50;
    double& value = *(double*)&a;
    value = 0.0;  // try to allocate 8 bytes to the memory, but only 4 bytes avaiable

    std::cout << value << std::endl;

    std::cin.get();
}