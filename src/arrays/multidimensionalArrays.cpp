#include <iostream>

int main()
{
    int* array = new int[50];

    int** a2d = new int*[50];
    for (int i = 0; i < 50; i++)
    {
        a2d[i] = new int[50];
    }

    int*** a3d = new int**[50];
    for (int i = 0; i < 50; i++)
    {
        a3d[i] = new int*[50];
        for (int j = 0; j < 50; j++)
        {
            int** ptr = a3d[i];
            ptr[j] = new int[50];
        }
    }

    a3d[0][0][0] = 0;

    std::cin.get();
}