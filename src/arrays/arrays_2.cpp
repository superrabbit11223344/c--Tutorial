#include <iostream>

class Entity
{
public:
    // int example[5];
    // int* example = new int[5];
    static const int exampleSize = 5;
    int example[exampleSize];

    Entity()
    {
        for (int i = 0; i < exampleSize; i++)
        {
            example[i] = 2;
        }
    }
};



int main()
{
    Entity e;

    std::cout << sizeof(Entity) << std::endl;

    std::cin.get();
}