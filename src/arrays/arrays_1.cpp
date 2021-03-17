#include <iostream>

int main()
{
    int example[5];
    int* ptr = example;

    for (int i = 0; i < 5; i++)
    {
        example[i] = 2;
    }

    example[2] = 5;
    *(int*)((char*)ptr + 8) = 6;


    std::cin.get();
}