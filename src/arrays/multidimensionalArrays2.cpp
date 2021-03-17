#include <iostream>

int main()
{
    int** a2d = new int*[50];
    for (int i = 0; i < 50; i++)
    {
        a2d[i] = new int[50];
    }

    for (int i = 0; i < 50; i++)
    {
        delete[] a2d[i];
    }

    delete[] a2d;

    int* array = new int[5 * 5];
    
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            array[y + x * 5] = 2;
        }
    }

    std::cin.get();
}