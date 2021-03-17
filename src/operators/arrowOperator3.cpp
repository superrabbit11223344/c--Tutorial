#include <iostream>
#include <string>

struct Vector3
{
    float x, y, z;
};

int main()
{
    float* offset1 = &((Vector3*)nullptr)->x;
    float* offset2 = &((Vector3*)nullptr)->y;
    float* offset3 = &((Vector3*)nullptr)->z;

    std::cout << offset1 << std::endl;
    std::cout << offset2 << std::endl;
    std::cout << offset3 << std::endl;

    std::cin.get();
}